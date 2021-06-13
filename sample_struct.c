#include <stdio.h>

struct S {
    int v[3];
};

void print_array(struct S x)
{
    for (int i = 0; i < 3; i++) {
        printf("%d ", x.v[i]);
    }
    printf("\n");
}

struct S f(struct S c)
{
    c.v[0] = 5;
    return c;
}

int main(int argc, char* argv[])
{
    struct S a;
    struct S b;
    a.v[0] = 1;
    a.v[1] = 2;
    a.v[2] = 3;
    b = a;
    b.v[0] = 3;
    print_array(a);
    print_array(b);

    struct S c = f(a);
    print_array(a);
    print_array(c);

    return 0;
}
