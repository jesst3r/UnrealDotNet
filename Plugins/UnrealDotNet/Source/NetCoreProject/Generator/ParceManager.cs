﻿using System;
using System.Collections.Generic;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Antlr4.Runtime;
using Generator.Metadata;

namespace Generator
{
    internal class ParceManager
    {
        public static Domain Parce(string[] files)
        {
            var Classes = new ConcurrentDictionary<string, Class>();
            var mult = Environment.ProcessorCount;
            var tasks = new List<Task>();

            for (var i = 0; i < mult; i++)
            {
                var visitor = new MetadataVisitor(Classes);

                var i1 = i;
                tasks.Add(Task.Run(() => { ParceSolo(files, i1, mult, visitor); }));
            }

            Task.WaitAll(tasks.ToArray());

            return new Domain(Classes.Values);
        }

        private static void ParceSolo(IReadOnlyList<string> files, int i, int mult, MetadataVisitor visitor)
        {
            for (var j = i; j < files.Count; j += mult)
            {
                AppendFile(files[j], visitor);
            }
        }

        private static void AppendFile(string file, MetadataVisitor visitor)
        {
            var code = Filter.FilterSourceCode(File.ReadAllText(file));

            using (var ms = new MemoryStream(Encoding.ASCII.GetBytes(code)))
            {
                Console.ForegroundColor = ConsoleColor.DarkYellow;
                var watch = new Stopwatch();
                watch.Start();

                var inputStream = new AntlrInputStream(ms);

                var lexer = new UHeaderLexer(inputStream);
                var commonTokenStream = new CommonTokenStream(lexer);

                var parser = new UHeaderParser(commonTokenStream);
                var context = parser.translationUnit();

                var parceTime = watch.ElapsedMilliseconds;

                visitor.Append(context, file);

                watch.Stop();

                var visitTime = watch.ElapsedMilliseconds - parceTime;
                Console.ResetColor();
                Console.WriteLine($"{file}: Parce {parceTime}ms, Visit {visitTime}ms");
            }
        }
    }
}