#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=5;i<k;k--)
        {
            printf("  ");
        }
        for(int x=i;x>=1;x--)
        {
            printf("%d",x);
        }
        printf("\n");
    }
}