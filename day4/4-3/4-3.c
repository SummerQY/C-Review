//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main() 
{
	int i, sn, a;
	int tem = 0;
	printf("please input a number between 1 and 9:");
	scanf("%d", &a);
	printf("\n");
	sn = 0;
	for (i = 1; i <= 5; i++) 
	{
		tem += a * pow(10, i - 1);
		sn += tem;
	}
	printf("Sn=%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, sn);
	return 0;
}