#include <stdio.h>
#define MAX_SIZE 100   

void reverse_array(int arr[], int size) {
    int start = 0; 
    int end = size - 1; 

    while (start < end) {
       
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i != 0) {
            printf(", "); 
        }
        printf("%d", arr[i]);
    }
    printf("]\n");
}

int main() {
    int arr[MAX_SIZE];
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    print_array(arr, size);

    reverse_array(arr, size); 

    printf("Reversed array: ");
    print_array(arr, size); 

    return 0;
}
