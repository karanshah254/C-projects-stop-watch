#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;

    float dis;
    float r1,r2;

    printf("\nEnter 3 Number a,b,c : \n");
    scanf("%d %d %d",&a,&b,&c);

    dis=(b*b)-4*a*c ;

    printf("\nDiscriminant ==> %0.2f",dis);

    if(dis>0)
    {
        printf("\nRoots are real and exist");
        r1= ((-b)+sqrt(dis))/2*a;
        r2= ((-b)-sqrt(dis))/2*a;
        printf("\nRoots Are : %f %f",r1,r2);
    }
    else{
        printf("\nRoots donot exist");

    }

}