#include <stdio.h>

int main(void)
{
    int grade[5] = {91, 66, 87, 79, 74};
    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        // printf("grade[%d]=%d\n", i, grade[i]);
        total = total + grade[i];
    }

    int average = total / 5;

    printf("Average: %d\n", average);

    return 0;

}