#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    // This is one of the competative programs in C Progarmming .

    char *operation;
    int num1, num2;

    operation = argv[1];
    num1 = atoi(argv[2]); // atio is used to change string to integer .
    num2 = atoi(argv[3]); // atio is used to change string to integer .

    printf("Operation --> | %s | \n", operation);
    printf("Number 1 --> %d\n", num1);
    printf("Number 2 --> %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("|--Answer--| ==> %d\n", num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("|--Answer--| ==> %d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("|--Answer--| ==> %d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("|--Answer--| ==> %d\n", num1 / num2);
    }

    return 0;
}
