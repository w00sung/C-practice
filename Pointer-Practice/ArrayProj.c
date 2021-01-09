#include <stdio.h>
#define MONTHS 12
int main()
{
	int high[MONTHS];
	// static으로 배열 선언시 0으로 초기화
	static int non_init[3];
	for (int i = 0; i < MONTHS; i++)
		// 초기화 하지 않은 배열 다루지마!
		// 값을 일부만 선언시 나머지 값 초기화 시켜줌
		printf("%d", high[i]);

	// 상수값
	const int temp = 0;
	// 배열의 원소 바꿀 수 없다.
	const int low[3] = { -7,-5,1 };

	return 0;
}
