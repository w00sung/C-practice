#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_pow(int base,int exp) {
	int ans = 1;
	for (int i = 0; i < exp; i++) {
		ans *= base;
	}
	return ans;

}

int main()
{
	//char my_chars[] = "Hello, World";

	//int daily_temperature[365];
	//double stock_price_history[365];

	//printf("%zd\n", sizeof(stock_price_history));
	//printf("%zd\n", sizeof(double));
	//printf("%zd\n", sizeof(stock_price_history[0]));

	//int my_numbers[5];

	//my_numbers[0] = 1;
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2;
	//my_numbers[4] = 1024;

	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", my_numbers[i]);
	//}

	/* Á¦°ö ±¸ÇÏ±â */
	int base = 0, exp = 0, ans = 0;
	printf("Input base & exp\n");
	while (scanf("%d %d", &base, &exp) == 2)
	{
		ans = compute_pow(base, exp);
		printf("Answer = %d\n", ans);
	}
	return 0;
}
