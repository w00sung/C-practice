#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10;
	int* ptr = NULL;

	/* malloc */

	ptr = (int*)malloc(n * sizeof(int));

	printf("�ʱ� malloc");
	//for (int i = 0; i < n; i++)
	//	printf("%d ", ptr[i]);
	//printf("----------------\n");

	ptr[0] = 0;
	/* realloc */
	n = 20;
	//int* ptr2 = NULL;
	//ptr2 = (int*)realloc(ptr, n * sizeof(int));
	//printf("ptr�� ptr2�� realloc �� �ּ� �� ptr vs ptr2\n");
	//printf("%p %p \n", ptr, ptr2);



	printf("ptr�� ptr�� realloc �� �ּ� �� ptr vs ptr2\n");
	printf("%p \n", ptr);

	ptr = (int*)realloc(ptr, 30 * sizeof(int));
	printf("%p \n", ptr);
	//for (int i = 0; i < n; i++)
	//	printf("%d ", ptr[i]);


	free(ptr);

	return 0;
}
