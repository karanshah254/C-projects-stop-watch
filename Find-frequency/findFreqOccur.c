#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[1000];
    int counter[10] = {0};

    printf("\nEnter : ");
    gets(str);

    printf("\nOutput : ");
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            counter[(str[i] - '0')]++;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", counter[i]);
    }

    return 0;
}

/*


sample : Enter : a11472o5t6

Output : 0 2 1 0 1 1 1 1 0 0


*/
