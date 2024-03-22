#include <stdio.h>

int main()
{
    int num, n, newnum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);
    newnum = (1 << n) | num;
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newnum);

    return 0;
}