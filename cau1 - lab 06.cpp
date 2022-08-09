#include<stdio.h>

//Cau 1: Vi?t chuong trình nh?p d? li?u cho m?t m?ng s? nguyên intArr g?m 10 ph?n t?. Hi?n th? các ph?n
t? ? v? trí ch?n(0, 2, 4,....).
int main()
{
	int array[10];
	int i;
	printf("Nhap cac phan tu cua mang: ");
	for (i=0;i<9;i++)
	{
		scanf("%d ",&array[i]);
	}
	printf("Cac phan tu o vi tri chan la: ");
	for (i=0;i<9;i=i+2)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
