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
	// 주소를 역참조 하여서 값을 변경함
	*a = *b;
	*b = tmp;


}