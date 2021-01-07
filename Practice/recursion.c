#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long recursive_factorial(int n);
void print_binary(unsigned long n);
int main()
{
	/* 팩토리얼 */
	int num = 0;
	long factorial = 0;
	printf("print num : ");
	scanf("%d",&num);
	factorial = recursive_factorial(num);
	printf("%d! = %d\n", num, factorial);
	
	/* 이진수 변환 */

	print_binary(num);
	return 0;


}

long recursive_factorial(int n)
{
	if (n == 1)
		return 1;

	// tail recursion : return 앞에서 재귀를 호출
	return n * recursive_factorial(n - 1);

}
				// long도 integer다.
void print_binary(unsigned long n)
{
	if (n == 0)
		return;

	print_binary(n / 2);
	unsigned int num = n % 2;
	printf("%d",num);
	

}
