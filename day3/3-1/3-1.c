//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int A[],int B[],int len) 
{
	int i;
	int C[1000];
	for (i = 0; i <= len - 1; i++) 
	{
		C[i] = A[i];
		A[i] = B[i];
		B[i] = C[i];
	}
}

int main() 
{
	int A[1000] = { 0 }, B[1000] = { 0 };
	int len, i, j, m, n;
	printf("please input the arrlength:");
	scanf("%d", &len);
	printf("\n");
	for (i = 0; i <= len - 1; i++) 
	{
		printf("please input A[%d]:",i);
		scanf("%d", &A[i]);
		printf("\n");
	}
	for (j = 0; j <= len - 1; j++)
	{
		printf("please input B[%d]:",j);
		scanf("%d", &B[j]);
		printf("\n");
	}
	change(A, B,len);
	printf("after changing:\n");
	printf("A={");
	for (m = 0; m <= len - 1; m++) 
	{
		if (m != len - 1)
			printf("%d、", A[m]);
		else
			printf("%d", A[m]);
	}
	printf("}\n");
	printf("B={");
	for (n = 0; n <= len - 1; n++)
	{
		if (n != len - 1)
			printf("%d、", B[n]);
		else
			printf("%d", B[n]);
	}
	printf("}\n");
	return 0;
}