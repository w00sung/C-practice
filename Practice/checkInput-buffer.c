#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������Ÿ��
long get_long(void);

int main()
{
	long number;
	
	while (1)
	{
		// 1�� 100 ������ ���� �Էµ� ������ ����ȴ�.
		printf("Please input a number between 1 and 100\n");
		number = get_long();

		if (number >= 1 && number <= 100)
		{
			printf("OK. Thanks");
			break;
		}
		else
		{
			// while�� �ٽ� ����ȴ�.
			printf("Wrong Input\n");
		}
	}
	printf("Your input %d is between 1 and 100", number);
	return 0;
}

// ������ �Է¹޴� �Լ�
long get_long(void) {
	printf("Plz input an integer and press enter \n");

	long input;
	char c;

	// ���� ���� 1�� �ʰ�(�����δ� 1���� �ƴϸ�)�̸� while��
	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		// 2�� �̻� ���ͼ� ���ۿ� �����ִ� ���� û��
		while ((c = getchar()) != '\n')
			putchar(c); // input left in buffer

		printf(" - is not an integer. Plz try again.\n");

	}
	printf("Your input %ld is an integer. Thx.\n", input);
	return input;
}