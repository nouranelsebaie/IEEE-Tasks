#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    char *s = str;
    char *r = reverse;
    int len = 0;
   printf("Enter any string: ");
    gets(str);

    while(*(s++)) len++;
    s--;
    while(len >= 0)
    {
        *(r++) = *(--s);
        len--;
    }
    *r = '\0';
    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);

    return 0;
}