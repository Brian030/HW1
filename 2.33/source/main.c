#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double mile, mon, mpm, park, pass, mpday;
	
	
	printf("此工具會計算節由共乘可省多少錢\n\n");
	printf("請輸入:\n每天行駛里程\n每加侖汽油價格\n每加侖汽油行駛里程數\n每天的停車費\n每天的過路費\n");
	scanf("%lf%lf%lf%lf%lf", &mile, &mon, &mpm, &park, &pass);
	mpday = mile*mon*mpm + park + pass;
	printf("每天花開車上班花費:%f\n\n\n", mpday);
	
	system("pause");
	return 0;
}