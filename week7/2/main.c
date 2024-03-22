#include <stdio.h>

int main()
{
    int num, msb;
    printf("Enter any number: ");
    scanf("%d", &num);
	int BITS = sizeof(int)*8;
    msb = 1 << (BITS - 1);
    if(num & msb)
        printf("MSB of %d is (1).", num);
    else
        printf("MSB of %d is (0).", num);

    return 0;
}