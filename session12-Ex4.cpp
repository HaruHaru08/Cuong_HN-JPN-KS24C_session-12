#include <stdio.h>

int FindMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {12, 45, 7, 89, 34, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = FindMax(arr, size);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}
