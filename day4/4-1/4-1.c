/*

在屏幕上输出以下图案：
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *

*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
    int i, j, h;
    for (h = 1; h <= 13; h++) 
    {
        if (h <= 7)
            i = 7 - h, j = 2 * h - 1;
        else
            i = h - 7, j = (13 - h) * 2 + 1;
        while (i != 0)
        {
            printf(" ");
            i--;
        }
        while (j != 0)
        {
            printf("*");
            j--;
        }
        printf("\n");
    }
    return 0;
}