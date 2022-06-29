//exchange values of two variables without temporary variable
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a, b;
	printf("input a=");
	scanf("%d", &a);
	printf("\n");
	printf("input b=");
	scanf("%d", &b);
	printf("\n");
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after exchange:\na=%d,b=%d", a, b);
	return 0;
}