#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main(void)
{
    // int b = 42;
    // int *a = &b;

    // printf("b: %d\n", b);
    // printf("&b: %p\n", &b);
    // printf("a: %p\n", a);

    // *a = 50;
    // printf("b: %d\n", b);
    // printf("&b: %p\n", &b);
    // printf("a: %p\n", a);

    // int a, b, c;
    // a = b = c = 0;

    // printf("Enter 3 numbers: ");
    // scanf("%d %d %d", &a, &b, &c);
    // printf("Result: %d\n", a+b+c);

    // int x, y;
    // x = 5;
    // y = 10;

    // printf("x: %d, y: %d\n", x, y);
    // printf("&x: %p\n, &y: %p\n", &x, &y);
    // swap(&x, &y);
    // printf("x: %d, y: %d\n", x, y);

    int *a;
    int length = 0;

    printf("Enter a length: ");
    scanf("%d", &length);

    a = malloc(length * sizeof(int));
    printf("a: %p\n", a);
    for(int i = 0; i < length; i++)
    {
        a[i] = i;
    }

    for(int i = 0; i < length; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    free(a);

    return 0;
}

// void swap(int *a, int *b)
// {
//     printf("a: %p\n b: %p\n", a, b);
//     printf("*a: %d\n *b: %d\n", *a, *b);
//     int temp = 0;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }