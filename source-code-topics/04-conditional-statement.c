// Condition Statements
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){

    // If Statement
    int x = 4;
    if(x==2)
    {
        printf("X is equal to 2!\n");
    }else if(x==4){
        printf("X is equal to 4!\n");
    }
    else{
        printf("X does not equal to a given value!\n");
    }

    printf("If done!\n");

    
    // Logical Operators
    int year = 2018;
    int price = 21000;

    if(year >= 2019 && price <= 20000) printf("OK\n");
    else printf("Not OK!\n");

    if(year >= 2019 || price <= 20000) printf("OK\n");
    else printf("Not OK!\n");

    if(year >= 2019 != price <= 20000) printf("OK\n");
    else printf("Not OK!\n");

    // Switch statements
    int num = 11;
    
    switch(num)
    {
        case 1:
            printf("Case 1\n");
            break;

        case 2:
            printf("Case 2\n");
            break;
        
        default:
            printf("Default Case\n");
            break;
    }

    // vowel count program
    char s[] = "aFJFJiofsFJAAAIEF";
    int length = strlen(s);
    int a = 0;
    int vowel = 0;

    for (int i = 0; i < length; i++)
    {
        switch(toupper(s[i]))
        {
            case 'A':
                a++;
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel++;
        }
    }

    printf("a: %d, vowel: %d\n", a, vowel);

    return 0;
}






    

