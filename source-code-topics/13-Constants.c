#include <stdio.h>
// #define LENGTH 10
const int len = 10;
void print_array(int *array, int size);
int main(void)
{

    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf("array length: %d\n", LENGTH);
    print_array(a, 10);
    printf("\n");
    int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // printf("array length: %d\n", LENGTH);
    print_array(b, 11);

    return 0;

}

void print_array(int *array, int size)
{   
    const int length = size;
    for(int i = 0; i < length; i++)
    {
        printf("array[%d]=%d\n", i, array[i]);
    }
}