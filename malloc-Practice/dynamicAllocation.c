#include <stdio.h>
#include <stdlib.h>

int main()
{
	///* ���ڿ�ũ�� �Ҵ� */
	//int n = 10;
	//char* arr = (char*)malloc(sizeof(char) * n);
	//
	//// have to free : �ü������ �ݳ��ҰԿ�!
	//free(arr);


	/* double �� �迭 �����Ҵ� before & after free */

	double* ptr = NULL;

					// �� ����Ʈ ���ɰž�?
					// �ü������ ��û!
	// �����ʹ� �ּҸ� �����ִ�. 
	// ptr�� ������ٰ�, �޸𸮰� ������� ���� �ƴϴ�.
	ptr = (double*)malloc(30 * sizeof(double));

	
	printf("Before free %p\n", ptr);
	free(ptr);
	// �ּҴ� ���� ������, �޸𸮴� �������.
	printf("After free %p\n", ptr);


	/* free with the other variable */

	double* ptr2 = NULL;
	ptr = (double*)malloc(30 * sizeof(double));
	ptr2 = ptr;
	free(ptr2);

	printf("CHECK");



	return 0;
}
