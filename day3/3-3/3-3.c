//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int checklen(int N) 
{
	int i;
	for (i = 1; i<=10; i++) 
	{
		if (pow(10,i-1)<= N)
			if (pow(10,i) > N)
				return i;
	}
}
void d_arr(int D_arr[],int len,int N) 
{
	int i,j;
	j = N;
	for (i = 1; i <= len; i++)
	{
		if (i != len)
		{
			D_arr[i - 1] = (j % (int)(pow(10,i))) / (pow(10,i-1));
			j = j - D_arr[i - 1] * (pow(10,i-1));
		}
		else
			D_arr[i - 1] = j / (pow(10,i-1));
	}	
}
int count(int D_arr[], int len) 
{
	int count, i;
	count = 0;
	for (i = 0; i <= len - 1; i++) 
	{
		if (D_arr[i] == 9)
			count+=1;	
	}
	return count;
}
void arrclear(int A[],int a) 
{
	int i;
	for (i = 0; i < a; i++) 
	{
		A[i] = 0;
	}

}
int main() 
{
	int i,len, cou=0;
	int D_arr[10] = {0};
	int test;
	test = pow(10,2);
	printf("test=%d\n",test);
	for (i = 1; i <= 100; i++) 
	{
		len = checklen(i);
		d_arr(D_arr, len, i);
		cou += count(D_arr, len);
		arrclear(D_arr, 10);
	}
	printf("1~100共有%d个9\n", cou);
	return 0;
}