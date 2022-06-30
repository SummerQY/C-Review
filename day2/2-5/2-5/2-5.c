//求两个数的最大公约数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N1, N2;
	int i, j, max;
	printf("please input N1:");
	scanf("%d", &N1);
	printf("\n");
	printf("please input N2:");
	scanf("%d", &N2);
	printf("\n");
	if (N1 < N2)
		j = N1;
	else
		j = N2;
	max = 1;
	for (i = 1; i <= j; i++) 
	{
		if (N1 % i == 0 && N2 % i == 0)
			max = i;
	}
	printf("the max factor is :%d\n", max);
	return 0;
}