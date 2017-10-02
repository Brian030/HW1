#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int std;
	double height, weight, bmi1, bmi2;
	printf("British system press 1, metric system press 2\n");
	scanf("%d", &std);
	

	if (std == 1)
	{
		printf("Enter weight(lb) and height(inch)\n");
		scanf("%lf%lf", &weight, &height);
		bmi1 = (weight * 703) / (height*height);
		printf("BMI=%f\n\n", bmi1);
	}

	if (std == 2)
	{
		printf("Enter weight(kg) and height(m)\n");
		scanf("%lf%lf", &weight, &height);
		bmi2 = weight / (height*height);
		printf("BMI=%f\n\n", bmi2);
	}

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obase:       30 or greater\n");
	

	system("pause");
	return 0;

}