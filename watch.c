#include<stdio.h>
#include<stdlib.h>
#define Cycle 60
int main()
{
    int hr,min,sec;
    printf("enter hour minute second:-");
    scanf("%d %d %d",&hr,&min,&sec);
    system("cls");
    int h=0,m=0,s=0;
    while(1)
    {
        printf("\\n\nSTOP-WATCH\n\n");
        printf("\n\n%d %d %d\n",h,m,s);
        printf("\n\n");
        sleep(1);
        if(h==hr && m==min && s==sec){break;}
        else{system("cls");}
    s++;
    if(s==Cycle)
    {m++;
    s=0;}
    if(m==Cycle)
    {h++;
    m=0;}
    }
    return 0;
}