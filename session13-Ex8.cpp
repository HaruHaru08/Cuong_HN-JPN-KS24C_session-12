#include <stdio.h>
#include <stdlib.h>

int ucln(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    int result = ucln(num1, num2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, result);
    return 0;
}
