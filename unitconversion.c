#include<stdio.h>
/*  1 - km to miles n*0.62
    2 - inches to foot n* 0.0833
    3 - cm to inches n*0.393
    4 - pound to kg n*0.453
    5 - inch to meter n* 0.0254
*/
int main()
{
    int ch;
    float num;


    printf("\nEnter 1 for km to miles");
    printf("\nEnter 2 for inch to foot");
    printf("\nEnter 3 for cm to inch");
    printf("\nEnter 4 for pound to kg");
    printf("\nEnter 5 for inch to meter");
    printf("\n\n");
    scanf("%d",&ch);
    fflush(stdin);

    printf("\nenter valid number : \n");
    scanf("%f",&num);

    switch (ch)
    {
    case 1: printf("\n km to miles ==> %f ",num *0.62);
        break;
    
    default: printf("\nenter valid number btw 1-5 \n");
        break;
    }

}


