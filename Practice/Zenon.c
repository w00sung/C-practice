#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//// 고정 값은 const 로 선언
	//const signed speed = 1;
	//const unsigned repeat_max = 10;
	//
	//// 이동량, 현재시간, 거리 선언
	//double dt = 1.0;
	//double time = 0.0;
	//double dist = 0.0;

	//for (unsigned int i = 1; i <= repeat_max; i++) {

	//	// 거리는 매 시간 이동량 만큼 증가
	//	dist += speed * dt;
	//	time += dt;

	//	printf("time = %.10fs, distance = %.10fm\n", time, dist);

	//	dt *= 0.5;

	//}
	//int secret_key = 324;
	//int input = 0;
	//do
	//{
	//	printf("Enter secret code : ");
	//	scanf("%d", &input);
	//}
	//while (input != secret_key);
	//
	for (int i = 11; i >=0; i--) {
		for (int c = 65; c <= 65+i; c++) {
			printf("%c ", c);
		}
		printf("\n");
	}
	return 0;
}
