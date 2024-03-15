#include <stdio.h>
int reverseNumber(int num, int temp);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == reverseNumber(num, 0)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

int reverseNumber(int num, int temp) {
    if (num == 0) {
        return temp;
    } else {
        return reverseNumber(num / 10, temp * 10 + num % 10);
    }
}