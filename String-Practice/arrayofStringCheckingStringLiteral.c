#include <stdio.h>

int main()
{
	const char* mythings[3] =
	{
		"Dancing",
		"Couting apples",
		"Watching movies"
	};
	char yourthings[3][40] =
	{
		"Studying",
		"Eating",
		"Watching Nextflix"
	};

	const char* temp1 = "Dancing";
	const char* temp2 = "Studying";

					// Dancing 은 Read-Only에 프로그램 코드가 저장되어있는 영역 근처에 존재한다.
					// 디버깅해서 참조해봐라!
	printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
					// yourthings는 해당 글들을 배열로 담아놨다.
					// 결국 Studying 은 2번 복사된거다.
	printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);


	return 0;
}
