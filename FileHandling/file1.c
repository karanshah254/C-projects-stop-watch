#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "\nThank for Coming to GitHub Profile\n";

    // ****** Reading a file ******
    //ptr = fopen("myfile.txt", "r");
   // fscanf(ptr, "%s", string);
    //printf("The content of this file is : %s\n", string);

    // ****** Writing a file ******
    // ptr = fopen("myfile.txt", "w");
    // fprintf(ptr, "%s", string);

    // ****** Appedning a file ******
     ptr = fopen("myfile.txt", "a");
     fprintf(ptr, "%s", string);
     printf("\nAfter Appeding the strinf will be \n%s\n",string);

    fclose(ptr);

    return 0;
}
