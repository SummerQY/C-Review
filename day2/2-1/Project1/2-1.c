//给定两个整形变量的值，将两个值的内容进行交换。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a, b, c;
	printf("请输入第一个整形变量的值：\n");
	printf("a=");
	scanf("%d", &a);
	printf("请输入第二个整形变量的值：\n");
	printf("b=");
	scanf("%d", &b);
	c = a; a = b; b = c;
	printf("交换后两个整型变量的值分别为：\na=%d,b=%d\n",a,b);
	return 0;
}
