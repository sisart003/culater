#include <stdio.h>
// #include <ctype.h>
// #include <string.h>


int main(void)
{

    FILE *fh_output;

    fh_output = fopen("inputoutput.docx", "w");

    fputs("abc\t", fh_output);
    fputs("123\n", fh_output);
    fputs("A String\n", fh_output);

    int data = 5;
    fprintf(fh_output, "Data: %d\n", data); 

    fclose(fh_output);

    return 0;

}