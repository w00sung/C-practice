#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 프로토타입
long get_long(void);

int main()
{
	long number;
	
	while (1)
	{
		// 1과 100 사이의 값이 입력될 때까지 실행된다.
		printf("Please input a number between 1 and 100\n");
		number = get_long();

		if (number >= 1 && number <= 100)
		{
			printf("OK. Thanks");
			break;
		}
		else
		{
			// while문 다시 실행된다.
			printf("Wrong Input\n");
		}
	}
	printf("Your input %d is between 1 and 100", number);
	return 0;
}

// 정수를 입력받는 함수
long get_long(void) {
	printf("Plz input an integer and press enter \n");

	long input;
	char c;

	// 들어온 값이 1개 초과(실제로는 1개가 아니면)이면 while문
	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		// 2개 이상 들어와서 버퍼에 남아있는 값들 청소
		while ((c = getchar()) != '\n')
			putchar(c); // input left in buffer

		printf(" - is not an integer. Plz try again.\n");

	}
	printf("Your input %ld is an integer. Thx.\n", input);
	return input;
}