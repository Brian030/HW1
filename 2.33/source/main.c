#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double mile, mon, mpm, park, pass, mpday;
	
	
	printf("���u��|�p��`�Ѧ@���i�٦h�ֿ�\n\n");
	printf("�п�J:\n�C�Ѧ�p���{\n�C�[�ڨT�o����\n�C�[�ڨT�o��p���{��\n�C�Ѫ������O\n�C�Ѫ��L���O\n");
	scanf("%lf%lf%lf%lf%lf", &mile, &mon, &mpm, &park, &pass);
	mpday = mile*mon*mpm + park + pass;
	printf("�C�Ѫ�}���W�Z��O:%f\n\n\n", mpday);
	
	system("pause");
	return 0;
}