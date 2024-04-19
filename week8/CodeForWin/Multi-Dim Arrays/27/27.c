#include <stdio.h>

#define MAX_SIZE 10

int areMatricesEqual(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int rows, int columns);

int main() {
    int rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    if (areMatricesEqual(matrix1, matrix2, rows, columns)) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }
    
    return 0;
}

int areMatricesEqual(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return 0; // Matrices are not equal
            }
        }
    }
    return 1; // Matrices are equal
}