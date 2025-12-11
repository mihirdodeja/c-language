#include <stdio.h>

int main() 
{
    char str[1000];
    char *p;
    int length = 0;

    printf("Enter any string: ");
    scanf("%s",&str);

    p = str;   

    while (*p != '\0') 
    {
        length++;
        p++;   
    }

    printf("The length of a string is: %d", length);

    return 0;
}
