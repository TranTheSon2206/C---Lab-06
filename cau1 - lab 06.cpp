#include<stdio.h>

//Cau 1: Vi?t chuong tr�nh nh?p d? li?u cho m?t m?ng s? nguy�n intArr g?m 10 ph?n t?. Hi?n th? c�c ph?n
t? ? v? tr� ch?n(0, 2, 4,....).
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
