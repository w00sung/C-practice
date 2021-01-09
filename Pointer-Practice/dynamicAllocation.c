#include <stdio.h>
#include <stdlib.h>
int main()
{
	double* ptr = NULL;
						// 연속된 double 형태 30개 
	ptr = (double*)malloc(30 * sizeof(double));
	
	printf("Dummy Output\n");

	{
		int n = 10000000;
		int* ptr = (int*)malloc(n * sizeof(int));

		if (!ptr)
			exit(EXIT_FAILURE);
		for (int i = 0; i < n; ++i)
			ptr[i] = i + 1;

		//free(ptr)
	}

	int* ctr = NULL;
	int n = 7;
	ctr = (int*)calloc(n, sizeof(int));

	return 0;
}
