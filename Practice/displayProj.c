#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	/* 아래 반복문은 단순히 enter가 입력된다고 종료되지 않는다.
	-> scanf는 인자가 모두 채워져야 함 */
	/*
	while (1)
	{
		scanf("%c %d %d", &c, &rows, &cols);
		while (getchar() != '\n') continue;
		display(c, rows, cols);
		if (c == '\n')
			break;
	}
	*/

	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		// scanf 이후 들어오는 줄바꿈 버퍼에 넣지 않는 작업
		while (getchar() != '\n') continue;
		display(c, rows, cols);
	}


	return 0;
}

void display(char cr, int lines, int width)
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < width; j++)
		{
			putchar(cr);
		}
		putchar('\n');
	}

}
