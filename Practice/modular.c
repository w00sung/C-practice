#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int seconds =0, minutes=0, hours=0;
	
	//while (seconds >= 0)
	//{
	//	/*printf("Input seconds :");
	//	scanf("%d", &seconds);

	//	minutes = seconds / 60;
	//	seconds %= 60;

	//	hours = minutes / 60;
	//	minutes %= 60;

	//	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);*/
	//}
	int count = 0;
	while (count <= 10) 
	{
		printf("%d", ++count
		);
	}


	float f = 3.14f;
	double d = f;
	
	// demotion : 작은 자료형에 큰 자료형 넣기
	d = 1.25;
	f = 1.25;
	f = 1.123;


	/* casting operators */

	double d;
	d = (double)3.14f;


	return 0;
}
