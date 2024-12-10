#include<stdio.h>

void initialization();
int main(){
	initialization();
	return 0;
}
void initialization(){
	int arr[100][100];
	int rows,cols;
	printf("Nhap so hang cho mang: ");
	scanf("%d",&rows);
	printf("Nhap so cot cho mang: ");
	scanf("%d",&cols);
	printf("Nhap cac phan tu cho mang: \n");
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				printf("arr[%d][%d]= ",i,j);
				scanf("%d",&arr[i][j]);
			}
		}
	printf("Ma tran cua mang la: \n");
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
}