#include<stdio.h>

// Call By Value Example

// Swapping Two Numbers

int swap(int *x,int *y);
int swap(int *x,int *y)
{
    int temp;

    temp= *x;
    *x = *y;
    *y=temp;

    return 0;
}
int main()
{
    int a=10,b=54;

    printf("\nBefore Swaping a and b are %d & %d Respectively\n",a,b);

    swap(&a,&b);

    printf("\nAfter Swapping a and b are %d and %d respectively\n",a,b);
}
