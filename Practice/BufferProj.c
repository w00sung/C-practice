#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;

	// EOF : End Of File -- -1
	// 입력 종료시, getchar()은 -1을 리턴한다.
	while ((c == getchar()) != EOF)
		putchar(c);



	return 0;
}
