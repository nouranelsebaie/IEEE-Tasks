#include <stdio.h>
void swapArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        // Swap elements of arr1 and arr2
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
     int size ;
	 printf("Enter size of array: ");
    scanf("%d", &size); 
    int arr1[size];
    int arr2[size];
    
    printf("Enter elements for Array 1:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements for Array 2:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    printf("Before swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    
    printf("Array 2: ");
    printArray(arr2, size);
    
    swapArrays(arr1, arr2, size);
    
    printf("After swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    
    printf("Array 2: ");
    printArray(arr2, size);
    
    return 0;
}