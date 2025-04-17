#include <stdio.h>
#include <string.h>


int main(void)
{

    // char test[5] = "test";

    // printf("%s\n", test);

    // for(int i = 0; i < 5; i++)
    // {
    //     printf("test[%d]='%c'\n", i, test[i]);
    // }

    char mystring[] = "Some string!";
    int length = strlen(mystring);

    printf("length: %d\n", length);

    int count_s = 0;

    for(int i = 0; i < length; i++)
    {
        if(mystring[i] == 's' || mystring[i] == 'S')
        {
            count_s++;
        }
    }

    printf("S Count: %d\n", count_s);

    char s1[] = "My String to copy!";
    char s2[50];

    strcpy(s2, s1);

    printf("s2: %s\n", s2);

    return 0;

}