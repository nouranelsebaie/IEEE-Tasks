#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number to calculate product of digit: ");
    scanf("%d", &num);
     int product=1;
    while(num != 0)
    {
 
        product = product * (num % 10);
        num = num / 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}