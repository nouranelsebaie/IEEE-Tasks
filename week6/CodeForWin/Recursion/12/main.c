#include <stdio.h>

void printEvenNumbers(int start, int end);
void printOddNumbers(int start, int end);

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

        printf("Even numbers between %d and %d:\n", start, end);
        printEvenNumbers(start, end);
        printf("\nOdd numbers between %d and %d:\n", start, end);
        printOddNumbers(start, end);


    return 0;
}

void printEvenNumbers(int start, int end) {
    if (start > end) return;

    if (start % 2 == 0) {
        printf("%d ", start);
        printEvenNumbers(start + 2, end);
    } else {
        printEvenNumbers(start + 1, end);
    }
}
void printOddNumbers(int start, int end) {
    if (start > end) return;
    if (start % 2 != 0) {
        printf("%d ", start);
        printOddNumbers(start + 2, end);
    } else {
        printOddNumbers(start + 1, end);
    }
}
