#include <stdio.h>

#define MAX_SIZE 100
void getMinMax(int * numbers, int size, int * min, int * max);


int main()
{
    int arr[MAX_SIZE], size, i;
    int min, max;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in array: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }

    getMinMax(arr, size, &min, &max);
    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);


    return 0;
}
void getMinMax(int * numbers, int size, int * min, int * max)
{
    int i;
    *min = *(numbers + 0);
    *max = *(numbers + 0); 
    for (i = 0; i < size; i++)
    {
        
        if(*(numbers + i) < *(min))
            *min = *(numbers + i);
        if(*(numbers + i) > *(max))
            *max = *(numbers + i);
    }
}