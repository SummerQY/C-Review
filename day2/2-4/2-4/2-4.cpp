//将三个数按从大到小输出。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void rank(int arr[],int len) 
{
	int max, loc;
	int i, j;
	for (i=0;i<=len-1;i++) 
	{
		max = arr[i], loc = i;
		for (j =i+1;j<=len-1;j++ )
		{
			if (max < arr[j]) 
			{
				max = arr[j];
				loc = j;
			}
		}
		arr[loc] = arr[i];
		arr[i] = max;
	}
}
int main() 
{
	int len;
	printf("please input arr length(1~100):");
	scanf("%d", &len);
	printf("\n");
	int i, j;
	int arr[100] = {0};
	for (i=0;i<=len-1;i++) 
	{
		printf("input arr[%d]:", i);
		scanf("%d", &arr[i]);
		printf("\n");
	}
	rank(arr, len);
	printf("descending output:\n");
	for(j = 0; j <= len - 1; j++) 
	{
		printf("%d、", arr[j]);
	}
	return 0;
}