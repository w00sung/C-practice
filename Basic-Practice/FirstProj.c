/*
* Written by Woosung.J 
*/

#include <stdio.h>

void say_hello();

int main()
{
	int x; // declaration 
		   //--�޸� ���� Ȯ��, x��� ������ ���� ����
	int y;
	int z;

	// int x, y, z; �� �����ϴ�.
	
	x = 1;
	y = 2;

	// int x=1, y=2, z; �� �����ϴ�. (�ʱ�ȭ)

	z = x + y;
	say_hello();

	return 0;
}

void say_hello()
{
	printf("Hello!");
}