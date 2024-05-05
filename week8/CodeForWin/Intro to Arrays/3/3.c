#include <stdio.h>
#define MAX_SIZE 1000 
int sum_array(int arr[], int index, int size) {
    if (index >= size) { 
        return 0; 
    }
    return arr[index] + sum_array(arr, index + 1, size);
}

int main() {
    int arr[MAX_SIZE];
    int i,size ;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in the array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = sum_array(arr, 0, size);

    printf("Sum of all array elements: %d\n", sum);

    return 0;
}
