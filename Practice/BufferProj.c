#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;

	// EOF : End Of File -- -1
	// �Է� �����, getchar()�� -1�� �����Ѵ�.
	while ((c == getchar()) != EOF)
		putchar(c);



	return 0;
}
