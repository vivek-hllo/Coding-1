#include <stdio.h>

int main(void)
{
    int A[10][10], B[10][10], C[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns (max 10): ");
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &A[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &B[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant Matrix (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}