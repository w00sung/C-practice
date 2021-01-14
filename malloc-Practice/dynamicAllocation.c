#include <stdio.h>
#include <stdlib.h>

int main()
{
	///* 문자열크기 할당 */
	//int n = 10;
	//char* arr = (char*)malloc(sizeof(char) * n);
	//
	//// have to free : 운영체제에게 반납할게요!
	//free(arr);


	/* double 형 배열 동적할당 before & after free */

	double* ptr = NULL;

					// 몇 바이트 사용될거야?
					// 운영체제에게 요청!
	// 포인터는 주소만 적고있다. 
	// ptr이 사라진다고, 메모리가 사라지는 것은 아니다.
	ptr = (double*)malloc(30 * sizeof(double));

	
	printf("Before free %p\n", ptr);
	free(ptr);
	// 주소는 적혀 있으나, 메모리는 사라졌다.
	printf("After free %p\n", ptr);


	/* free with the other variable */

	double* ptr2 = NULL;
	ptr = (double*)malloc(30 * sizeof(double));
	ptr2 = ptr;
	free(ptr2);

	printf("CHECK");



	return 0;
}
