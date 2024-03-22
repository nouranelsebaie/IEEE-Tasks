#include <stdio.h>

int main()
{
    int num, n, bits;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);
    bits = (num >> n) & 1;
    printf("The %d bit is :%d", n, bits);
    return 0;
}