#include <stdio.h>

int main()
{
    int n1, n2, gcd, lcm, remainder, numerator, denominator;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    numerator = (n1 > n2) ? n1 : n2;
    denominator = (n1 < n2) ? n1 : n2;

    remainder = numerator % denominator;

    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }

    gcd = denominator;
    lcm = (n1 * n2) / gcd;

    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    printf("LCM of %d and %d is %d", n1, n2, lcm);

    return 0;
}