#include <stdio.h>


/*
	Static variable with external linkage
	- File scope, external linkage, static stroage duration
	- External storage class
	- External variables
*/

// static variable���� �˾Ƽ� �ʱ�ȭ(need 1��)�� �ȴ�.
// can use anywhere in this file
int g_int; 
double g_arr[1000];

/* can't use variable */
// int a2 = 2 * x;

void fun_sec();

int main()
{
	extern int g_int; // �ۿ�g_int �� �ִ�! ������Ѷ�
	extern double g_arr[]; // �迭�� extern ���� �� ũ�� ���� �ʿ� ����
	/* extern���� ����Ǿ� ���� ��, compiler�� ��Ƴ� */
	int g_int = 123; // hides global g_int


	return 0;
}
