//find the max between 10 integers
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int arr[10] = { 0 };
	int i,max;
	for (i = 0; i <= 9; i++) 
	{
		printf("please input integer-%d:",i+1);
		scanf("%d", &arr[i]);
		printf("\n");
		if (i == 0)
			max = arr[i];
		else
			if (max <= arr[i])
				max = arr[i];
	}
	printf("the max integer is %d\n", max);
	return 0;
}