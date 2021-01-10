#include <stdio.h>

int main()
{
	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	int i;
	// 배열 이름은 주소다.
	ptr1 = arr;
									  //포인터 변수의 주소(이중포인터)
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

	// 배열의 3번째 원소의 주소
	ptr2 = &arr[2];
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	// 포인터에 + 정수 : 포인터 형태 만큼 이동
	// +4 == 4byte가 4개 저장되는 만큼 더한다.
	ptr3 = ptr1 + 4;

	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	
	// Differencing
		//%td : 포인터의 차이를 출력할 때 사용!!!
	printf("%td\n", ptr3 - ptr1);

	// subtracing
	ptr3 = ptr3 - 4;

	// 가능하다
	ptr1++;
	*ptr1++;

	/* 포인터 사이 비교 */
	// 같은 형태였을 때, 비교가 가능하다.
	// 포인터도 결국 변수다!

	return 0;
}
