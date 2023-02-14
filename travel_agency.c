/*

We had opened a travel agency and required n numbers of driver with following details

1. name
2. driving licence number
3. route
4. kms

For Simplicity user can take input n=3-5 and print required details of n drivers


*/

#include <stdio.h>
struct Driver
{
    char name[50];
    char dlno[50];
    char route[50];
    int kms;
} d1, d2, d3;

int main()
{
    printf("\nEnter Details of drivers 1 :");

    printf("\nEnter name of first driver : ");
    scanf("%s", &d1.name);

    fflush(stdin);
    printf("\nEnter driving licence number of first driver : ");
    scanf("%s", &d1.dlno);

    printf("\nEnter route of first driver : ");
    scanf("%s", &d1.route);

    printf("\nEnter no of kilometers of first driver : ");
    scanf("%d", &d1.kms);

    printf("\nEnter Details of drivers 2 :");
    fflush(stdin);
    printf("\nEnter name of second driver : ");
    scanf("%s", &d2.name);

    printf("\n\nEnter driving licence number of second driver : ");
    scanf("%s", &d2.dlno);

    printf("\nEnter route of second driver : ");
    scanf("%s", &d2.route);

    printf("\nEnter no of kilometers of second driver : ");
    scanf("%d", &d2.kms);

    fflush(stdin);
    printf("\n\nEnter Details of drivers 3 :");

    printf("\nEnter name of third driver : ");
    scanf("%s", &d3.name);

    printf("\nEnter driving licence number of third driver : ");
    scanf("%s", &d3.dlno);

    printf("\nEnter route of third driver : ");
    scanf("%s", &d3.route);

    printf("\nEnter no of kilometers of third driver : ");
    scanf("%d", &d3.kms);

    printf("\n**********PRINTING INFORMATION***********");

    printf("\nFor Driver No 1 :\nName is : %s", d1.name);
    printf("\nDL No is : %s", d1.dlno);
    printf("\nRoute is : %s", d1.route);
    printf("\nKilometers are : %d", d1.kms);

    printf("\nFor Driver No 2 :\nName is : %s", d2.name);
    printf("\nDL No is : %s", d2.dlno);
    printf("\nRoute is : %s", d2.route);
    printf("\nKilometers are : %d", d2.kms);

    printf("\nFor Driver No 3 :\nName is : %s", d3.name);
    printf("\nDL No is : %s", d3.dlno);
    printf("\nRoute is : %s", d3.route);
    printf("\nKilometers are : %d", d3.kms);

    return 0;
}
