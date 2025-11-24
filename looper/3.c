// Sum of First and Last Digits
#include<stdio.h>
int main()
{
    int digit,sum=0;
    printf("Enter A Number: ");
    scanf("%d",&digit);

    while(digit>0)
    {
        int rem=digit%10;
        sum=sum+rem;
        digit=digit/10;
    }
    printf("Sum of First and Last Digit is: %d",sum);
}