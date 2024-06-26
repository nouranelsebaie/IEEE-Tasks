#include <stdio.h>

int searchElement(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            return i; 
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int index = searchElement(arr, size, target);

    if (index == -1) {
        printf("Element %d not found in the array.\n", target);
    } else {
        printf("Element %d found at index %d.\n", target, index);
    }

    return 0;
}