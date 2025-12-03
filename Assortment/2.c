// Largest Element in a 2D Array
#include<stdio.h>

int main()
{
    int r_size,c_size;
    printf("Enter Row Size: ");  
    scanf("%d",&r_size);  
    printf("Enter Column Size: ");
    scanf("%d",&c_size);

    int a[r_size][c_size],i,j;
    printf("Enter 2D Array Elements: ");

    for(i=0;i<r_size;i++)
    {
        for(j=0;j<c_size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r_size;i++)
    {
        for(j=0;j<c_size;j++)
        {
            printf("Array Elements: %d\t",a[i][j]);
        }
        // printf("\t");
    }

    int large=a[0][0];
    for(i=0;i<r_size;i++)
    {
        for(j=0;j<c_size;j++)
        {
            if(a[i][j]>large)
            {
                large=a[i][j];
            }
        }
    }
    printf("\nLargest Element: %d\n",large);

}