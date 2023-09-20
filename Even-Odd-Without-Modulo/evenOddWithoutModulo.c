/*

Logic : Input : Number = 8
        coverting 8 into binary
        even number binary ends with 0 and for odd it ends with 1
        using & operator 1&1 gives 1 so returns odd number and 1&0 gives
        0 returns even number .

        Thus 8 ends with 0 and 1&0 is 0 so 8 is even number .

*/

#include <stdio.h>
int main()
{
    int number;

    printf("\nEnter Number to check wheather it is even or odd : ");
    scanf("%d", &number);

    if (number & 1)
    {
        printf("\n%d is odd number", number);
    }
    else
    {
        printf("\n%d is even number", number);
    }

    return 0;
}