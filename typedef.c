#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
} std;

// Used typedef and changes (struct Student) datatype ---->   std datatype

int main()
{
    // typedef previous_name new_name;

    // used to change existing datab type to new one

    std s1, s2;

    // ---> std is alternative datatype & variable of struct Student  <---

    // --> User can use both the datatype & variables in main function <---

    s1.id = 785;

    s2.id = 885;

    printf("\ns1 id is --> %d", s1.id);
    printf("\ns2 id is -->  %d", s2.id);
}