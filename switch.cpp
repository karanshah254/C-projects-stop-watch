#include<stdio.h>
int main()
{
    char ch;
    int a,b;

    printf("\nenter a n b : \n");
    scanf("%i %i",&a,&b);

    fflush(stdin);
    printf("\nenter (+) for addition (-) for substraction (*) for multiplication (/) for division : \n");
    scanf("%c",&ch);

    switch (ch)
    {
        case '+' : printf("Addition ==> %i",a+b);
                    break;
        case '-' : printf("\nSubstarction ==> %i",a-b);
        break;

        case '*' : printf("\nproduct ==> %i ",a*b);
        break;

        case '/' : printf("\nDivision ==> %f",float(a)/float(b));
        break;

        default : printf("\nenter valid character \n");             
    }
}