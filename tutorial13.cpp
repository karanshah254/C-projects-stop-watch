#include<stdio.h>
int main()
{
    int num;
    int index=0;

    printf("\nEnter a Number : \n");
    scanf("%d",&num);

    do
    {
        printf("%d\n",index);
        index = index + 1;
        
    }while(index<num);
    return 0;
}