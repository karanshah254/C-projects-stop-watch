/*
Logic : First Inut a=10 and b=20
        let say a=a+b so a=30 and b=20
        let say b=a-b so b=10 and a=30
        let say a=a-b and a=20 and b=10

        this is how we swap values without using temp
*/

#include <stdio.h>
int main()
{
    int a, b;

    printf("\nEnter 2 NUmber a nd b respectively : ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swaping Value is a = %d and b = %d", a, b);

    // Say a=10 and b=20
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\nAfter Swaping Value is a = %d and b = %d", a, b);

    return 0;
}