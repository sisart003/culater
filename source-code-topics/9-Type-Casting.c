#include <stdio.h>
// #include <ctype.h>
// #include <string.h>


int main(void)
{

    int a = 5;
    int b = 2;

    double c = (double) a / b;

    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %f\n", a, b, c);

    return 0;

}