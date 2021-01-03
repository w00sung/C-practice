#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;

	printf("I love apple.\n");
	/* 
	<cmd 내에서, 출력방향 변경>
	Direction.exe > output.txt 
	
	<덧붙여 쓰기>
	Direction.exe >> output.txt

	<파이프라인 관리>
	copy Direction.exe Test.exe
	Test.exe | Direction.exe
	Test.exe의 결과가 Direction.exe로 파이프를 타고 들어간다.
	*/


	/* 입력 받아서 출력하기
	char str[100]
	scanf("%s", str);
	printf("I love %s.\n", str); */

	/* 
	<cmd 내에서, 입력방향 변경>
	Direction.exe < input.txt
	*/

	return 0;
}
