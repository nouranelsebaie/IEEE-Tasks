#include <stdio.h>

int isArmstrong(int num);
void printArmstrong(int start, int end);

int main()
{
    int start, end;

    printf("Enter lower limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print armstrong numbers: ");
    scanf("%d", &end);

    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);

    return 0;
}
int isArmstrong(int num)
{
    int temp, rem, sum;
    int count = 0;
	int mul=1;
	int cnt;
    temp = num;
    sum = 0;
    while(temp!=0)
	{
	temp=temp/10;
    count++;	
	}
	temp = num;
	cnt=count;
    while(temp != 0)
    {
        rem = temp % 10;
		while(cnt!=0)
		{
			mul=mul*rem;
			cnt--;
		}
		sum+=mul;
        temp/=10;
		cnt=count;
		mul=1;
		
    }

    if(num == sum)
        return 1;
    else
        return 0;
}


void printArmstrong(int start, int end)
{

    
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
}
