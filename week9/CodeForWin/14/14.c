#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while(*(++s1));
    while(*(s1++) = *(s2++));

    printf("Concatenated string = %s", str1);

    return 0;
}