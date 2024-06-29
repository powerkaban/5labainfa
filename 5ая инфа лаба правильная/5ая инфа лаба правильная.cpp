#include <iostream>
#include <stdio.h>

int N, M, i, j;
int A[10][10];

void vvod();
void obrabotka();
void vyvod();

void main() {

    N = 5;
    setlocale(LC_ALL, "RU");
    vvod();
    obrabotka();
    vyvod();
}

void vvod() {
    
    int c = 0;
    N++;
    printf("Введите N, M: ");
    scanf_s("%d %d", &N, &M);

    printf("Теперь массив: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf_s("%d", &A[i][j]);
        }
    }
}

void obrabotka() {
    for (j = 0; j < M; j++) {
        int max;
        int c = 0;
        int proverka = 0;

        for (i = 0; i < N; i++) {
            if (A[i][j] % 7 == 0) {
                if (!proverka) {
                    max = A[i][j];
                    proverka = 1;
                }
                c = c + 1;
                if (A[i][j] > max) {
                    max = A[i][j];
                }
            }
        }

        if (c % 2 == 0 && c > 0) {
            for (i = 0; i < N; i++) {
                if (A[i][j] == max) {
                    A[i][j] = 0;
                }
            }
        }
    }
}

void vyvod() {
    printf("Измененный массив: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

/*

int main() {
    int N, M, i, j;
    int A[10][10];
    setlocale(LC_ALL, "RU");

    printf("Введите N, M: ");
    scanf_s("%d %d", &N, &M);

    printf("Теперь массив: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf_s("%d", &A[i][j]);
        }
    }

    for (j = 0; j < M; j++) {
        int max;
        int c = 0;
        int proverka = 0;

        for (i = 0; i < N; i++) {
            if (A[i][j] % 7 == 0) {
                if (!proverka) {
                    max = A[i][j];
                    proverka = 1;
                }
                c = c + 1;
                if (A[i][j] > max) {
                    max = A[i][j];
                }
            }
        }

        if (c % 2 == 0 && c > 0) {
            for (i = 0; i < N; i++) {
                if (A[i][j] == max) {
                    A[i][j] = 0;
                }
            }
        }
    }

    printf("Измененный массив: \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/