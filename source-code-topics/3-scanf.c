// Scanf function is used to read formatted input from the console.

#include <stdio.h>

int main(void){

    double n = 0;
    printf("Enter a float: ");
    scanf("%f", &n);
    printf("n: %f\n", n);

    char buffer[50];
    printf("Enter a string: ");
    scanf("%s", buffer);
    printf("You entered: %s\n", buffer);

    return 0;
}