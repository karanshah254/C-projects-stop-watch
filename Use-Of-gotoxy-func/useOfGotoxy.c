#include <stdio.h>
#include <windows.h>
#include<conio.h>
COORD coord = {0,0};


int main()
{
    
    coord.X = 10; // colums
    coord.Y = 10;  // rows

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // function to move the cursor at respective position.

    printf("\nHello Myself Karan");

    // gotoxy(X,Y);  // not useful but idea for program

    return 0;
}
