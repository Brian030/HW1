#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, fin;

	printf("块ㄢ计耞材计琌材计ぇ计\n");
	scanf("%d%d", &num1, &num2);
	fin = num1%num2;

	if (fin == 0)
	{
		printf("%d琌%dぇ计\n", num1, num2);
	}

	if (fin != 0)
	{
		printf("%dぃ琌%dぇ计\n", num1, num2);
	}

	system("pause");
	return 0;
}