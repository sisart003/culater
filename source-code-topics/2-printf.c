// The printf function is used to print formatted output to the console.

#include <stdio.h>

int main(void){

    int x = 20;
    printf("Hello World!\n");
    printf("int: %d\n", x+2);

    char c = 'F';
    printf("char: %c\n", c);

    double d = 6.9420;
    printf("double: %lf\n", d);

    char str[] = "Hello World!";
    printf("string: %s\n", str);

    return 0;
    
}