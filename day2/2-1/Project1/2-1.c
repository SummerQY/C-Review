//�����������α�����ֵ��������ֵ�����ݽ��н�����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a, b, c;
	printf("�������һ�����α�����ֵ��\n");
	printf("a=");
	scanf("%d", &a);
	printf("������ڶ������α�����ֵ��\n");
	printf("b=");
	scanf("%d", &b);
	c = a; a = b; b = c;
	printf("�������������ͱ�����ֵ�ֱ�Ϊ��\na=%d,b=%d\n",a,b);
	return 0;
}
