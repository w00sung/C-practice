#include <stdio.h>

void swap(int* a, int* b);

int main()
{
	int a = 100;
	int b = 200;
	
	printf("a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
void swap(int* a, int* b) {

	printf("SWAP\n");
	int tmp = *a;
	// �ּҸ� ������ �Ͽ��� ���� ������
	*a = *b;
	*b = tmp;


}