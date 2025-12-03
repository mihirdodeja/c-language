// Transpose of a Matrix
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter Row Size: ");  
    scanf("%d",&row);  
    printf("Enter Column Size: ");
    scanf("%d",&col);

    int a[row][col],tranpose[row][col];
    printf("Enter 2D Array Elements: ");

    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 

    printf("Array Elements: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    } 
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            tranpose[j][i]=a[i][j];
        }
    }
    printf("Tranpose of the Matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",tranpose[i][j]);
        }
        printf("\n");
    }
}