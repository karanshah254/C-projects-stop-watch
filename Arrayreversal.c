#include<stdio.h>

// Target : 7,6,5,4,3,2,1

void arrayrev(int arr[])
{
    int temp,i;
    for(int i=0;i<7/2;i++)     // 7/2 is done because loop goes till 4 element only
    {
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }

}
int main()
{
    int i;

    int arr[]={51,52,53,54,55,56,57};
    printf("\nBefore Reversing : ");
    for(int i=0;i<7;i++)
    {
        printf("\nThe Value of %d is %d ",i+1,arr[i]);
    }

    arrayrev(arr);

    printf("\nAfter Reversing : ");
    fflush(stdin);
    for(int i=0;i<7;i++)
    {
        printf("\nThe Value of %d is %d ",i+1,arr[i]);
    }

    return 0;
}