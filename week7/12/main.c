#include <stdio.h>
int main()
{
    int num, zeros, ones, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    zeros = 0;
    ones = 0;
	int INT_SIZE =sizeof(int) * 8;
    for(i=0; i<INT_SIZE; i++)
    {
        if(num & 1)
            ones++;
        else
            zeros++;
        num >>= 1;
    }
    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}