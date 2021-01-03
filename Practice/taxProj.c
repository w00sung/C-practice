#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double income = 0;
	double tax = 0;
	printf("Plz input tax : ");
	scanf("%lf", &income);
	if (income <=12e6) {
		tax = income * 0.06;
	}
	else if (income <= 46e6) {
		tax = income*0.06 + (income - 12e6) * 0.15;
	}
	printf("Tax is = %10.3lf\n", tax);
	printf("Your income after tax deduction = %10.3lf", income - tax);
	
	/* 범위값 표현하는 if 문 */
	int number = 0;
	printf("Input the number");
	scanf("%d", &number);
	if (number > 5) {
		if (number < 10) {
			printf("number between 5 and 10");
		}
		else {
			printf("larger than 10");

		}
	}
	
	return 0;
}
