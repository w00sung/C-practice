#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);
	//printf("%d %f %s", i, f, str);

	///* character */
	//char c;
	//scanf("%c", &c);
	//printf("%i\n", c);

	/* *modifier for printf() */
	//int i = 123;
	//int width = 0;
	//printf("Input width : ");
	//scanf("%d", &width);
	//printf("%*d", width, i); // *에 해당하는 것 변수로 입력가능

	/* *modifier for scanf() */

	int i;
	scanf("%*d%*d%d", &i);
	printf("Your third input = %d", i);

	return 0;
}
