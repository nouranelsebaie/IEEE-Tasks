#include <stdio.h>
void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
   int size;
    printf("Enter size of array: ");
    scanf("%d", &size); 
    int arr[size];
    
    printf("Enter elements for the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Before reversing:\n");
    printf("Array: ");
    printArray(arr, size);
    
    reverseArray(arr, size);
    
    printf("After reversing:\n");
    printf("Array: ");
    printArray(arr, size);
    
    return 0;
}