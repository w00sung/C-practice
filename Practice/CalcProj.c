#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
int main()
{
	// 최대값, 최소값 설정
	// 최대값은 가장 작게, 최소값은 가장 크게 초기화
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input = 0;
	int n = 0;

	// 입력값 하나일 때 계속 실행
	while (scanf("%f", &input) == 1) {

		max = max > input ? max : input;
		min = min < input ? min : input;
		sum += input;
		n++;


	}
	
	printf("MAX : %f, MIN : %f, AVG : %f", max, min, sum / n);
	
	return 0;
}
