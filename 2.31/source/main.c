#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int squ, cube, num;

	printf("number\tsquare\tcube\n");
	printf("0\t0\t0\n");
	printf("1\t1\t1\n");
	printf("2\t4\t8\n");
	printf("3\t9\t27\n");
	printf("4\t16\t64\n");
	printf("5\t25\t125\n");
	printf("6\t36\t216\n");
	printf("7\t49\t343\n");
	printf("8\t64\t512\n");
	printf("9\t81\t729\n");
	printf("10\t100\t1000\n\n");

	printf("輸入一個0~10的數字\n");
	scanf("%d", &num);
	squ = num*num;
	cube = num*num*num;
	if(num>=0)
	{
		if (num <= 10)
		{
			printf("%d的2次方是:%d\n", num, squ);
			printf("%d的3次方是%d\n", num, cube);
		}
	}

	system("pause");
	return 0;
}