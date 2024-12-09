#include<stdio.h>

void PrintArray(int arr[], int size) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
    printf("Nhap so phan tu cho mang: ");
    scanf("%d",&n);
    printf("Nhap cac phan tu cho mang: \n");
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]); 
	}
    int size = n;
    PrintArray(arr, size);
    return 0;
}
