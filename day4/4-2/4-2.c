//���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ�������
//�磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������

/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ����������������
��ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int checklen(int N)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (pow(10, i - 1) <= N)
			if (pow(10, i) > N)
				return i;
	}
}
void d_arr(int D_arr[], int len, int N)
{
	int i, j;
	j = N;
	for (i = 1; i <= len; i++)
	{
		if (i != len)
		{
			D_arr[i - 1] = (j % (int)(pow(10, i))) / (pow(10, i - 1));
			j = j - D_arr[i - 1] * (pow(10, i - 1));
		}
		else
			D_arr[i - 1] = j / (pow(10, i - 1));
	}
}
int count(int D_arr[], int len,int N)
{
	int i,num;
	num = 0;
	for (i = 0; i <= len - 1; i++)
	{
		num += pow(D_arr[i],3);
	}
	if (num == N)
		return 1;
	return 0;
}
void arrclear(int A[], int a)
{
	int i;
	for (i = 0; i < a; i++)
	{
		A[i] = 0;
	}

}
int main()
{
	int i, len, cou = 0;
	int j;
	int D_arr[10] = { 0 };
	int print[1000] = { 0 };
	for (i = 100; i <= 999; i++)
	{
		len = checklen(i);
		d_arr(D_arr, len, i);
		if (count(D_arr, len, i) == 1) 
		{
			cou += 1;
			print[cou - 1] = i;
		}
		arrclear(D_arr, 10);
	}
	printf("0~999����%d��ˮ����\n�ֱ�Ϊ��\n", cou);
	for (j = 0; j <= cou - 1; j++) 
	{
		if (j != cou - 1)
			printf("%d��", print[j]);
		else
			printf("%d\n", print[j]);
	}
	return 0;
}

