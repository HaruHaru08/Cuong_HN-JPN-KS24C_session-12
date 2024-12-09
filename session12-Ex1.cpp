#include<stdio.h>
int calculate();
int main(){
	int sum;
	sum=calculate();
	printf("Tong hai so la: %d",sum);
	return 0;
}
int calculate(){
	int num1,num2,sum;
	printf("Nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap so thu hai: ");
	scanf("%d",&num2);
	sum=num1+num2;
	return sum;
}