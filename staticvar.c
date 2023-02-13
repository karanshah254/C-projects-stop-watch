/*

    New Concept :

    1.These variable stores the values whihc is used before only .
    2.These Varibales only used constant literals .

    Eg : static int a=5;            ( valid )
         static int a=function();   (invalid)


*/

#include <stdio.h>

int b = 34; // This is a global variable since it is declared inside main()

int ret()
{
    return 43 * 3;
}

int func1(int b1)
{
    static int var = 99;
    printf("The value of Variable is %d\n", var);
    var++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + var;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);

    int val = func1(b);

    val = func1(b);

    val = func1(b);

    val = func1(b);

    val = func1(b);
    int *ptr = &val;

    // printf("The value of func1 is %d", val);
    // printf("%d", loc);

    return 0;
}

/*

        Output :

        The value of Variable is 99
        The value of Variable is 100
        The value of Variable is 101
        The value of Variable is 102
        The value of Variable is 103


        As static will store variable value 99 also

*/
