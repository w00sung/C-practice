#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
	int sum = 0;
	int input = 0;
	int status; // scanf �� ��ȯ�� �̿�
	printf("Enter an integer (q to quit): ");
	/*status = scanf("%d", &input);
	while (status == 1) {
		printf("Enter an next integer (q to quit): ");
		status = scanf("%d", &input);
		sum += input;
	}*/

	// C- style:
	// while ������ �ٷ� ��
	while (scanf("%d", &input) == 1) {

		sum += input;
		printf("Enter next integer (q to quit) : ");

	}
	printf("SUM : %d", sum);

	const double PI = 3.1415926640234032;
	double guess = 0.0;
	scanf("%lf", &guess);
	// fabs : ���밪
	
	while(fabs(guess - PI) > 0.01) {
		printf("Fool! Try again");
		scanf("%lf", &guess);
	}

	int i = -5;
	while (i)
		printf("%d is true\n", i++); //0�� �ƴ� ������ ����
	printf("%d is false\n", i);

	_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2);

	bool tv = true;
	bool fv = false;

	for (int i = 0; i <= 10; i++) {
		print("%d", i);
	}

	for (int i = 0; i < 10; i++) {

	}


	return 0;

}
