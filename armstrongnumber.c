
/*

    Input : Number = 153

    Process : 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

    Output : 153 is Armstrong Number

*/

#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");
    return 0;
}