//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	float i;
	float sum=0;
	for (i = 1; i <= 100; i+=2) 
	{
		sum += (1 / i - 1 / (i + 1));
	}
	printf("多项式的值为：%f\n", sum);
	return 0;
	
}