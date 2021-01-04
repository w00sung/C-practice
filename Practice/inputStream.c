#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[255];
	int i, i2;
	double d;

	// 입력시에는 반드시 double형으로 입력
	scanf("%s %d %lf", str, &i, &d);
	// 출력시에는 자동으로 double형 전환
	printf("%s %d %f\n", str, i, d);

	// 정수형에 실수를 입력해보자.
	// 3.14 입력하면 "." 입력시, 
	// scanf가 입력이 끝난 것으로 인식
	scanf("%s %d %d", str, &i, &i2);
	printf("%s %d %d\n", str, i, i2);

	// 버퍼에 쌓이는 문자들을 출력하기!
	char c;
	while ((c = getchar()) != '\n')
		putchar(c);
	printf("\n");

	return 0;
}
