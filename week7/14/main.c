#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];  
    
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal & 1; 
        decimal = decimal >> 1; 
        i++;
    }
    
    printf("Binary representation: ");
    
    if (i == 0) {
        printf("0"); 
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    decimalToBinary(decimal);
    
    return 0;
}