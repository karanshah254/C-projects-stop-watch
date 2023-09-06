#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("\nEnter limit : ");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    printf("\nEnter %d numbers : \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    int temp;
    int j = num - 1; // last element of array

    for (int i = 0; i < num / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    printf("\nArray Reversal is : ");

    for (i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}


/*

Sample : 
Enter Limit : 5
Enter 5 numbers :
1
2
3
4
5

Array Reversal is : 5 4 3 2 1 

*/