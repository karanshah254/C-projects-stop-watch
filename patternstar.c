#include<stdio.h>
void q1();
void q2();
int main()
{
     //q1();
     q2();
}
void q1()
{
    /*
    printf the below given star patten

    *
    **
    ***
    ****
    *****
    */ 
    int i,j;
    printf("\n Welcome to Star Pattern Programming\n");

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void q2()
{
    /*
    
    Print The Below Pattern
    *****
    ****
    ***
    **
    *
    
    */
    printf("\nWelcome to Reverse Star Pattern Programming\n");

    int i,j;

    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}