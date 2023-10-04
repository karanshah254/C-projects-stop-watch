#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, vowelCount;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    vowelCount = 0;

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            ++vowelCount;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}