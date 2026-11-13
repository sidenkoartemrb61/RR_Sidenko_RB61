#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int A[20][20], B[20][20];
    int N, temp;

    srand(time(NULL));

    printf("Введіть розмір матриці N (1-20): ");
    scanf("%d", &N);

    if (N < 1 || N > 20) {
        printf("Помилка! N повинно бути від 1 до 20.\n");
        return 1;
    }

    // Заповнення матриці та копіювання
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = 30 + rand() % 26;
            B[i][j] = A[i][j];
        }
    }

    printf("\nПочаткова матриця A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // Сортування рядків за зростанням
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            for (int k = 0; k < N - j - 1; k++) {
                if (B[i][k] > B[i][k + 1]) {
                    temp = B[i][k];
                    B[i][k] = B[i][k + 1];
                    B[i][k + 1] = temp;
                }
            }
        }
    }

    // Сортування стовпців за зростанням
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N - 1; i++) {
            for (int k = 0; k < N - i - 1; k++) {
                if (B[k][j] > B[k + 1][j]) {
                    temp = B[k][j];
                    B[k][j] = B[k + 1][j];
                    B[k + 1][j] = temp;
                }
            }
        }
    }

    printf("\nВідсортована матриця B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
