#include <stdio.h>

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{

    int ans = factorial(5);

    printf("\nAnswer is : %d", ans);

    return 0;
}