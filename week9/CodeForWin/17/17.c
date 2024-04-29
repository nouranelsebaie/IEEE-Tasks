#include <stdio.h>
void Sort(int *arr, int size) {
    int swapped; 
    do {
        swapped = 0; 
        for (int i = 0; i < size - 1; i++) {
            int *current = arr + i; 
            int *next = arr + i + 1; 
            if (*current > *next) { 
                int temp = *current; 
                *current = *next;
                *next = temp;
                swapped = 1; 
            }
        }
        size--; 
    } while (swapped); 
}

int main() {
	int size ;
	 printf("Enter size of array: ");
    scanf("%d", &size); 
	int arr[size];
    printf("Enter elements for Array :\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    Sort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}