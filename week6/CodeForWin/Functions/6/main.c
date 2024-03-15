#include <stdio.h>

int isPrime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    
    {    
           
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}

void printPrimes(int lowerLimit, int upperLimit)
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
    
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int lowerLimit, upperLimit; 
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    printPrimes(lowerLimit, upperLimit);
    
    return 0;
}



