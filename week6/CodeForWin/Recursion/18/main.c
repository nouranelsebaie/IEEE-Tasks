
#include <stdio.h>

int fact(int num);

int main()
{
    int num;
    int factorial;
    printf("Enter any number: ");
    scanf("%d", &num);
    factorial = fact(num); 
    printf("Factorial of %d is %d", num, factorial);
    
    return 0;
}


int fact(int num)
{
    if(num == 0) 
        return 1;
    else if(num < 0)
	{ 
	 return num * fact(num + 1);	
	}
	else
		 return num * fact(num - 1);
       
}