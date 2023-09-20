#include <stdio.h>
#include <math.h>
int main()
{
    float a = 1, b = 5, c = 2;
    float discrimant;
    float r1, r2;

    discrimant = (b * b) - 4 * a * c;
    printf("\nDiscriminant = %f", discrimant);

    r1 = (-b + sqrt(discrimant)) / 2 * a;
    r2 = (-b - sqrt(discrimant)) / 2 * a;

    if (discrimant == 0)
    {
        printf("\nRoots are equal");
    }
    else if (discrimant < 0)
    {
        printf("\nRoots are not possible");
    }
    else
    {
        printf("\nRoots are real and distinct");

        printf("\nRoot 1 : %f", r1);
        printf("\nRoot 2 : %f", r2);
    }

    return 0;
}