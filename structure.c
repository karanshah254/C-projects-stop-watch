#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} karan, kavan, yug;  // Globally Used Can be Accessed in Any Function 

int main()
{
    // struct Student karan,kavan,yug;    // Local variables //
    karan.id = 1;
    kavan.id = 2;
    yug.id = 3;
    kavan.marks = 95;
    karan.marks = 99;
    yug.marks = 94;

    strcpy(karan.name, "Karan Shah Student At VGEC CE 26");

    karan.fav_char = 'p';
    kavan.fav_char = 'p';
    yug.fav_char = 'p';

    printf("\nKaran Got %d Marks", karan.marks);
    printf("\nKaran Id is %d", karan.id);
    printf("\nKaran Favourite Character is %d\n", karan.fav_char);

    printf("\nKavan Got %d Marks", kavan.marks);
    printf("\nKavan ID is %d", kavan.id);
    printf("\nKavan fav character is %d\n", kavan.fav_char);

    printf("\nYug Got %d Marks", yug.marks);
    printf("\nYug ID is %d", yug.id);
    printf("\nYug Fav Character is %d\n", yug.fav_char);

    printf("\nUser Name is ==> %s ", karan.name);
}