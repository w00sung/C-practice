/*
* Written by Woosung.J 
*/

#include <stdio.h>

void say_hello();

int main()
{
	int x; // declaration 
		   //--메모리 공간 확보, x라는 변수로 접근 가능
	int y;
	int z;

	// int x, y, z; 와 동일하다.
	
	x = 1;
	y = 2;

	// int x=1, y=2, z; 와 동일하다. (초기화)

	z = x + y;
	say_hello();

	return 0;
}

void say_hello()
{
	printf("Hello!");
}