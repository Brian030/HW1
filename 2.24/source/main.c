#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, fin;


	printf("�п�J�@�Ӿ�ơA�ڷ|�i�D�A�O�_���٬O����\n");
	scanf("%d", &num1);
	fin = num1 % 2;

	if (fin == 0)
	{
		printf("%d �O����\n", num1);
	}

	if (fin == 1)
	{
		printf("%d�O�_��\n", num1);
	}

	system("pause");
	return 0;

}