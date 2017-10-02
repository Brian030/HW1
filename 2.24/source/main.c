#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, fin;


	printf("叫块俱计и穦禗琌计临琌案计\n");
	scanf("%d", &num1);
	fin = num1 % 2;

	if (fin == 0)
	{
		printf("%d 琌案计\n", num1);
	}

	if (fin == 1)
	{
		printf("%d琌计\n", num1);
	}

	system("pause");
	return 0;

}