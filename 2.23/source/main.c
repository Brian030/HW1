#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("��J3�Ӿ�ơA�ڷ|�i�D�A�̤j�ȩM�̤p�� \n");
	scanf("%d%d%d", &num1, &num2, &num3);



	if (num1 > num2)
	{

		if (num2 > num3)
		{
			printf("%d�O�̤j��\n", num1);
			printf("%d�O�̤p��\n", num3);
		}

	}


	if (num1 > num3)
	{
		if (num3 > num2)
		{
			printf("%d�O�̤j��\n", num1);
			printf("%d�O�̤p��\n", num2);
		}
	}


	if (num2 > num1)
	{
		if (num1 > num3)
		{
			printf("%d�O�̤j��\n", num2);
			printf("%d�O�̤p��\n", num3);
		}
	}


	if (num2 > num3)
	{
		if (num3 > num1)
		{
			printf("%d�O�̤j��\n", num2);
			printf("%d�O�̤p��\n", num1);
		}
	}


	if (num3 > num2)
	{
		if (num2 > num1)
		{
			printf("%d�O�̤j��\n", num3);
			printf("%d�O�̤p��\n", num1);
		}
	}


	if (num3 > num1)
	{
		if (num1 > num2)
		{
			printf("%d�O�̤j��\n", num3);
			printf("%d�O�̤p��\n", num2);
		}
	}

	system("pause");
	return 0;
}