// Loops

#include <stdio.h>

int main(void){

    // While loop
    int i = 0;

    while(i <= 5)
    {
        printf("i: %d\n", i);
        i++;
    }
    printf("Loop is over!\n");

    int i = 0;
    while(i != 4)
    {
        printf("Enter the password to quit: ");
        scanf("%d", &i);
    }
    printf("Loop is Over!\n");

    // do while loop
    int i = 0;

    do{
        printf("i: %d\n", i);
        i++;
    }while(i < 5);

    printf("Do while loop Complete!\n");

    // for loops
    for(int i = 0; i < 5; i++)
    {
        printf("i: %d\n", i);
    }
    
    printf("For loop is complete!");


    
    // break and continue statements
    int i = 0;

    printf("Loop start\n");

    while(i < 10)
    {
        i++;
        if(i == 5) continue;
        else if(i == 8){
            printf("It should stop here!\n");
            break;
        }
        printf("i: %d\n", i);
    }

    printf("Loop end\n");

    return 0;

}
