//将三个数按从大到小输出。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int rank(int arr[]) 
{

}
int main() 
{
	int in[3] = { 0 }, out[3] = { 0 };
	int i, j, temp;
	for (i = 0; i <= 2; i++) 
	{
		printf("please input integer%d:",i);
		scanf("%d", &in[i]);
		printf("\n");
    }
	temp = in[0];
	if (in[0] < in[1])
	{
		in[0] = in[1];
		in[1] = temp;
		temp = in[0];
	}
		
	  
		
}