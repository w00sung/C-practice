#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;

	printf("I love apple.\n");
	/* 
	<cmd ������, ��¹��� ����>
	Direction.exe > output.txt 
	
	<���ٿ� ����>
	Direction.exe >> output.txt

	<���������� ����>
	copy Direction.exe Test.exe
	Test.exe | Direction.exe
	Test.exe�� ����� Direction.exe�� �������� Ÿ�� ����.
	*/


	/* �Է� �޾Ƽ� ����ϱ�
	char str[100]
	scanf("%s", str);
	printf("I love %s.\n", str); */

	/* 
	<cmd ������, �Է¹��� ����>
	Direction.exe < input.txt
	*/

	return 0;
}
