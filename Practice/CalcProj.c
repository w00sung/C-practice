#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
int main()
{
	// �ִ밪, �ּҰ� ����
	// �ִ밪�� ���� �۰�, �ּҰ��� ���� ũ�� �ʱ�ȭ
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input = 0;
	int n = 0;

	// �Է°� �ϳ��� �� ��� ����
	while (scanf("%f", &input) == 1) {

		max = max > input ? max : input;
		min = min < input ? min : input;
		sum += input;
		n++;


	}
	
	printf("MAX : %f, MIN : %f, AVG : %f", max, min, sum / n);
	
	return 0;
}
