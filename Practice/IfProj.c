#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int input = 0;
	//int a = 1;
	//while (a == 1) {
	//	printf("Input a positive integer : ");
	//	a = scanf("%d", &input);

	//	if (input % 2 == 0) {
	//		printf("Even\n");
	//	}
	//	else {
	//		printf("Odd\n");
	//	}
	//}

	///* getchar() & putchar() */

	char ch;

	//ch = getchar();
	//putchar(ch);

	/* while loop */
	//while (ch != '\n') {
	//while ((ch = getchar()) != "\n"){

	//	putchar(ch);

	//	//ch = getchar();
	//}

	//putchar(ch);

	/* 특정글자 filtering */
	//while ((ch = getchar()) != '\n') {
	//	if (ch == 'f')
	//		ch == 'X';
	//}

	//while ((ch = getchar()) != '\n') {
	//	/* 숫자는 X로 대체하는 코드 */
	//	if (ch >= '0' && ch <='9')
	//		ch == 'X';
	//}

	while ((ch = getchar()) != '\n') {
		if (ch >= 'a' && ch <= 'z')
			ch -= 'a' - 'A';
		
		else if (ch >= 'A' && ch <= 'Z')
			ch -= 'A' - 'a';
		putchar(ch);
	}


	return 0;
}
