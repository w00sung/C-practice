#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long recursive_factorial(int n);
void print_binary(unsigned long n);
int main()
{
	/* ���丮�� */
	int num = 0;
	long factorial = 0;
	printf("print num : ");
	scanf("%d",&num);
	factorial = recursive_factorial(num);
	printf("%d! = %d\n", num, factorial);
	
	/* ������ ��ȯ */

	print_binary(num);
	return 0;


}

long recursive_factorial(int n)
{
	if (n == 1)
		return 1;

	// tail recursion : return �տ��� ��͸� ȣ��
	return n * recursive_factorial(n - 1);

}
				// long�� integer��.
void print_binary(unsigned long n)
{
	if (n == 0)
		return;

	print_binary(n / 2);
	unsigned int num = n % 2;
	printf("%d",num);
	

}
