#include<stdio.h>
// its is done by iterative approach
// eg 5! == 5 X 4! == 5 X 4 X 3! == 5 X 4 X 3 X 2 X 1! == 5 X 4 x 3 X 2 X 1 == 120
int main()
{
    int number;
    int fact=1;
    printf("\nenter number you wanr factorial of : \n\n");
    scanf("%d",&number);

    for (int i = 1; i < number + 1; i++)
    {
        fact=fact *i;
    }
    printf("\nFactorial of %d ===== \n%d ",number,fact);
    
}