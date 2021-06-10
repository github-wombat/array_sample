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
            Console.WriteLine(string.Join(",",a));

            func(a);
            Console.WriteLine(string.Join(",",a));

            int[] d = {1,2};
            int[][] e = {d,d};
            d[0] = 3;
            foreach(int[] i in e) {
                Console.WriteLine(string.Join(",",i));
            }
        }

        static void func(int[] c)
        {
            c[0] = 5;
        }
    }
}
