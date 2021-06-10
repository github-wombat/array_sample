import java.util.Arrays;

class Sample {
    public static void main(String[] args) {
        int[] a = {1,2,3};
        int[] b = a;
        b[0] = 4;
        System.out.println(Arrays.toString(a));

        f(a);
        System.out.println(Arrays.toString(a));

        int[] d = {1,2};
        int[][] e = {d,d};
        d[0] = 3;
        for(var i : e) {
            System.out.println(Arrays.toString(i));
        }
    }

    static void f(int[] c) {
        c[0] = 5;
    }
}
