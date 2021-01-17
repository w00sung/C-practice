#include <stdio.h>


/*
	Static variable with external linkage
	- File scope, external linkage, static stroage duration
	- External storage class
	- External variables
*/

// static variable들은 알아서 초기화(need 1번)가 된다.
// can use anywhere in this file
int g_int; 
double g_arr[1000];

/* can't use variable */
// int a2 = 2 * x;

void fun_sec();

int main()
{
	extern int g_int; // 밖에g_int 가 있다! 연결시켜라
	extern double g_arr[]; // 배열을 extern 연결 시 크기 선언 필요 없음
	/* extern으로 선언되어 있을 시, compiler가 잡아냄 */
	int g_int = 123; // hides global g_int


	return 0;
}
