#include <stdio.h>

void f(int* c)
{
    c[0] = 5;
}

int main(int argc, char* argv[])
{
    int a[] = { 1, 2, 3 };
    int* b = a;
    b[0] = 4;
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    f(a);
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int d[] = { 1, 2 };
    int* e[] = { d, d };
    d[0] = 3;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", e[i][j]);
        }
    }
    printf("\n");
}
