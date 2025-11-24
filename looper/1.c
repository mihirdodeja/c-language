// Skip 3 letters of Alphabet and Print Accordingly

#include<stdio.h>
int main()
{
    char alpha='a';
    do
    {
        printf("%c \t",alpha);
        alpha+=4;
    } 
    while(alpha<='z');
}