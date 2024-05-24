#include <stdio.h>
#define ARRAY_SIZE 88

void fillArray(int arr[], int size, int start) {
    for (int i = 0; i < size; i++) {
        arr[i] = start + i;
    }
}

int searchArray(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[ARRAY_SIZE];
    int startNumber, searchNumber;

    printf("Ingrese el número inicial para llenar el arreglo: ");
    scanf("%d", &startNumber);
    fillArray(array, ARRAY_SIZE, startNumber);

    printf("Ingrese el número que desea buscar en el arreglo: ");
    scanf("%d", &searchNumber);

    int result = searchArray(array, ARRAY_SIZE, searchNumber);
    if (result != -1) {
        printf("Valor encontrado en la posición %d\n", result);
    } else {
        printf("No encontrado\n");
    }

    return 0;
}
