#include <stdio.h>

int main()
{
    int i,n;
    int mul;
    mul=1;
    l1:
   
    printf("\nenter number u want to find multiplication table : \n");
    scanf("%i",&n);

    printf("\nMultiplication Table of %i : \n",n);


   for(int i=1;i<=10;i++)
   {
        mul=i*n;
        printf("\n %d x %d = > %d ",n,i,mul);
   }
   
   
    
}
