#include <stdio.h>


int max(int num1, int num2)

{ 
 int max = num1 ;
  if(num2 > num1)
	{
		max = num2;
	}
	
    return max;
}


int min(int num1, int num2) 
{
   int min = num1 ;
  if(num2 < num1)
	{
		min = num2;
	}
	
    return min;
}


int main() 
{
    int num1, num2, maximum, minimum;
    
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    maximum = max(num1, num2);  
    minimum = min(num1, num2);  
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}

