#include<stdio.h>
void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";
    char str[34];
    gets(str); //equivalent to scanf
    printf("Using custom function printStr\n");
    printStr(str); //call by value
    printf("Using printf \n%s\n", str);
    printf("using puts: \n"); //simillar to printf
    puts(str); 
    return 0;
}