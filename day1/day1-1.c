// ��ӡ100~200֮�����������
#include<stdio.h>

int check(int i) 
{
	int a;
	if (i % 2 == 0)
		return 0;
	else
	{
		for (a = 3; a <= ((i + 1) / 2); a++) 
		{
			if (i % a == 0)
				return 0;
		}
		return 1;
	}
}

int main() 
{
	int a;
	printf("100~200֮��������У�\n");
	for (a = 100; a <= 200; a++) 
	{
		if (check(a) != 0)
			printf("%d��", a);
	}	
	printf("\n\n");
	return 0;
}




