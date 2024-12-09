#include <stdio.h>

double Factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("So nhap khong hop le!\n");
    } else {
        double factorial = Factorial(num);
        printf("Giai thua cua %d la: %d\n", num, factorial);
    }

    return 0;
}
