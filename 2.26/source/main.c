#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, fin;

	printf("��J��ӼƦr�A�Y�i�P�_�Ĥ@�ӼƬO�_���ĤG�ӼƤ�����\n");
	scanf("%d%d", &num1, &num2);
	fin = num1%num2;

	if (fin == 0)
	{
		printf("%d�O%d������\n", num1, num2);
	}

	if (fin != 0)
	{
		printf("%d���O%d������\n", num1, num2);
	}

	system("pause");
	return 0;
}