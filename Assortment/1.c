// Find Negative Numbers from an Array
#include<stdio.h>

int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d",&size);

    int a[size];
    printf("Enter Array Elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        printf("\nArray Elements Entered: %d",a[i]);

    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            printf("\nNegative Elements in Array: %d",a[i]);
        }
    }

    

}