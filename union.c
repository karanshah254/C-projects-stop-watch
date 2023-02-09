#include<stdio.h>
#include<string.h>
union student
{
    int id;
    char name[34];

};
int main()
{
     union student s1,s2;

     s1.id=785;

     strcpy(s1.name,"Karan");

     printf("\nUser NAme is --->  %s",s1.name);

     printf("\nUser ID is -->  %d",s1.id);

     /*
     
     After Execution It will give random number 
     to your s1.id variable as union will take character
     as main dataype rather than integer datatype
     
     */ 


}