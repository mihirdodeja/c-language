#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int k=i;k<5;k++)
        {
            printf(" ");
        }
        for(int j=5;j>=1;j--)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}