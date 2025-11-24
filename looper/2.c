// Count Digits
#include<stdio.h>
int main()
{
    int no,count=0;
    printf("Enter a Number: ");
    scanf("%d",&no);

    if(no==0)
    {
        count=1;
    }
    else
    {
        if(no<0)
        {
            no=-no;
        }
        while(no>0)
        {
            no=no/10;
            count++;
        }
    }
    printf("Number of digits are: %d",count);
}