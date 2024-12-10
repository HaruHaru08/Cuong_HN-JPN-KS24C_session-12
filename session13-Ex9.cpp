#include <stdio.h>

int n, m, choice;
int array[100][100];
int isPrime(int num);
void inputArray();
void printMatrix();
void printCorners();
void printBorders();
void printDiagonals();
void printPrimes();
void displayMenu();
int main() {
    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray();
                break;
            case 2:
                printMatrix();
                break;
            case 3:
                printCorners();
                break;
            case 4:
                printBorders();
                break;
            case 5:
                printDiagonals();
                break;
            case 6:
                printPrimes();
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le Vui long thu lai\n");
        }
    } while (choice != 7);

    return 0;
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void inputArray() {
	printf("Nhap so hang cua ma tran n: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran m: ");
    scanf("%d", &m);
    printf("Nhap cac phan tu cua ma tran\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void printMatrix() {
    printf("Ma tran\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void printCorners() {
    printf("Cac phan tu o goc cua ma tran\n");
    printf("%d %d\n", array[0][0], array[0][m-1]);
    printf("%d %d\n", array[n-1][0], array[n-1][m-1]);
}

void printBorders() {
    printf("Cac phan tu nam tren duong bien\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}

void printDiagonals() {
    printf("Cac phan tu nam tren duong cheo chinh va cheo phu\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}

void printPrimes() {
    printf("Cac phan tu la so nguyen to trong ma tran\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(array[i][j])) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}

void displayMenu() {
    printf("\nMENU\n");
    printf("1 Nhap gia tri cac phan tu cua mang\n");
    printf("2 In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3 In ra cac phan tu o goc theo ma tran\n");
    printf("4 In ra cac phan tu nam tren duong bien theo ma tran\n");
    printf("5 In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
    printf("6 In ra cac phan tu la so nguyen to theo ma tran\n");
    printf("7 Thoat\n");
    printf("Lua chon: ");
}
