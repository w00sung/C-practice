#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[255];
	int i, i2;
	double d;

	// �Է½ÿ��� �ݵ�� double������ �Է�
	scanf("%s %d %lf", str, &i, &d);
	// ��½ÿ��� �ڵ����� double�� ��ȯ
	printf("%s %d %f\n", str, i, d);

	// �������� �Ǽ��� �Է��غ���.
	// 3.14 �Է��ϸ� "." �Է½�, 
	// scanf�� �Է��� ���� ������ �ν�
	scanf("%s %d %d", str, &i, &i2);
	printf("%s %d %d\n", str, i, i2);

	// ���ۿ� ���̴� ���ڵ��� ����ϱ�!
	char c;
	while ((c = getchar()) != '\n')
		putchar(c);
	printf("\n");

	return 0;
}
