#include <stdio.h>

int main(void)
{
    int position = 10;
    int x, y, z;

    x = 20;
    y = 30;
    z = 10;

    float myNum = 5.99;
    char myLetter = 'D';
    double myNum2 = 9.99;
    char let = 165;

    printf("My number: %f\n", myNum);
    printf("My letter: %c\n", myLetter);
    printf("My number2: %lf\n", myNum2);
    printf("My letter2: %c\n", let);

    printf("Position: %d\n", position);
    printf("x: %d,\t y: %d,\t z:%d\t", x, y, z);

    return 0;
}