#include<stdio.h>
int sum(int a,int b);  //with arg and with retrun value
void printstar(int n)  //with arg and without return value
{
    for(int i=0;i<n;i++)
    {
        printf("%c", '*');
    }
}

int takenumber() //without agr and with return value
{
    int i;
    printf("\nenter number :\n");
    return i;
}

int main()
{
    int a,b;
    int c;
    a=58;b=85;

    /*c=sum(a,b);

    printf("\nSum is ==> %d \n",c);
    printstar(10);
    */

   c=takenumber();
   printf("\nThe number is entered is :\n%d",c);
}
int sum(int a,int b)
{
    return a+b;
}
