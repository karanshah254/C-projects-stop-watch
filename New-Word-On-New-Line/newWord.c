
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;

    s = malloc(1024 * sizeof(char));
    printf("\nEnter Sentence : ");
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    printf("Output is : \n");
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
        i++;
    }

    return 0;
}

/*

Sample : Enter Sentence : This is C File

Output : This
         is
         C
         File

*/