using System;

namespace sample_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = {1,2,3};
            int[] b = a;
            b[0] = 4;
            Console.WriteLine("[{0}]",string.Join(",",a));

            func(a);
            Console.WriteLine("[{0}]",string.Join(",",a));

            int[] d = {1,2};
            int[][] e = {d,d};
            e[0][0] = 3;
            foreach(int[] i in e) {
                Console.Write("[{0}] ",string.Join(",",i));
            }
            Console.WriteLine();
        }

        static void func(int[] c)
        {
            c[0] = 5;
        }
    }
}
