#include <stdio.h>
#define MAX_SIZE 1000 

void read_array(int arr[], int index, int size);
void print_array(int arr[], int index, int size);

int main() {
    int size;
    int arr[MAX_SIZE]; 

    printf("Enter the size of the array (1-%d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE || size <= 0) {
        printf("Invalid size.\n");
        return 1; 
    }

    read_array(arr, 0, size);

    printf("Array elements are: ");
    print_array(arr, 0, size);

    return 0;
}

void read_array(int arr[], int index, int size) {
    if (index >= size) {
        return; // Base case 
    }

    printf("Enter element %d: ", index + 1);
    scanf("%d", &arr[index]); 
    read_array(arr, index + 1, size);
}

void print_array(int arr[], int index, int size) {
    if (index >= size) {
        return; 
    }

    printf("%d ", arr[index]); 

    print_array(arr, index + 1, size);
}
