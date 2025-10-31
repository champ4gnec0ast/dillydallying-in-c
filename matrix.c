#include <stdio.h>

int matrices(float matrix);

int main() {
    float matrixA[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    float matrixB[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    float matrixC[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    float matrixProduct[3][3];


    printf("Matrix A:\n");
     for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%.2f ", matrixA[x][y]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%.2f ", matrixB[x][y]);
        }
        printf("\n");
    }

    printf("Matrix C:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%.2f ", matrixC[x][y]);
        }
        printf("\n");
    }

    printf("Matrix Product:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
           matrixProduct[x][y] = matrixA[x][y] * matrixB[x][y] * matrixC[x][y];
           printf("%.2f ", matrixProduct[x][y]);
        }
        printf("\n");
    }
}