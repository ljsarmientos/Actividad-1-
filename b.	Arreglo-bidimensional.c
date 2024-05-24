#include <stdio.h>

#define ROWS 9
#define COLS 9

void fillMatrix(int matrix[ROWS][COLS], int start) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = start++;
        }
    }
}

int searchMatrix(int matrix[ROWS][COLS], int value, int *row, int *col) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == value) {
                *row = i;
                *col = j;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int matrix[ROWS][COLS];
    int startNumber, searchNumber, foundRow, foundCol;

    printf("Ingrese el número inicial para llenar la matriz: ");
    scanf("%d", &startNumber);

    fillMatrix(matrix, startNumber);

    printf("Ingrese el número que desea buscar en la matriz: ");
    scanf("%d", &searchNumber);

    if (searchMatrix(matrix, searchNumber, &foundRow, &foundCol)) {
        printf("Valor encontrado en la posición [%d][%d]\n", foundRow, foundCol);
    } else {
        printf("No encontrado\n");
    }

    return 0;
}
