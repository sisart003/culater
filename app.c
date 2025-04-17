#include <stdio.h>
// #include <ctype.h>
// #include <string.h>
#include <stdbool.h>


int main(void)
{

    FILE *fh_output;

    fh_output = fopen("inputoutput.txt", "w");

    // fputs("abc\t", fh_output);
    // fputs("123\n", fh_output);
    // fputs("A String\n", fh_output);

    // int data = 5;
    // fprintf(fh_output, "Data: %d\n", data); 

    int input = 0;

    while(true)
    {
        printf("Enter # (-1 quits): ");
        scanf("%d", &input);
        if(input == -1) break;
        else fprintf(fh_output, "%d\n", input);
    }

    fclose(fh_output);

    FILE *fh_input;

    fh_input = fopen("inputoutput.txt", "r");

    int finput = 0;
    int lines = 0;
    int numbers[100];

    while(fscanf(fh_input, "%d", &finput) != EOF)
    {
        numbers[lines] = finput;
        printf("Number: %d\n", lines+1, finput);
        lines++;
    }

    int total = 0;
    for(int i = 0; i < lines; i++)
    {
        total += numbers[i];
    }
    printf("Average: %d\n", total / lines);

    fclose(fh_input);

    fh_input = fopen("in.txt", "r");
    char buffer[256];

    fgets(buffer, 256, fh_input);
    printf("Buffer: %s\n", buffer);
    
    fclose(fh_input);
    
    return 0;

}