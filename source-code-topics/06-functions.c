#include <stdio.h>

int add(int a, int b);
int mult(int x, int y);
void print_int(int a);

int main(void)
{
    printf("How to add?\n");
    int output = add(2, 2);
    printf("Output: %d\n", output);

    int mult_output = mult(10, 10);
    printf("Output: %d\n", mult_output);

    print_int(5);

    return 0;

}

int add(int a, int b){
    int result = a + b;
    return result;
}

int mult(int x, int y){
    int result = 0;
    for(int i = 0; i < x; i++){
        result += y;
    }
    
    return result;
}

void print_int(int a)
{
    printf("INT: %d\n", a);
}