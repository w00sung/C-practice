#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Dummy Outputs for Debugging\n");

	int* ptr_backup = NULL;

	/* Section (3) */
	/* Make Memory Leaking*/
	for (int k = 0; k < 10000; k++)
	{
		/* Section(1) */
		{
			int n = 10000000;

			int* ptr = (int*)malloc(n * sizeof(int));
			if (!ptr)
			{
				printf("Malloc() failed\n");
				exit(EXIT_FAILURE);
			}

			ptr_backup = ptr;

			//free(ptr)
		}
	}
	// ptr 변수는 block 안에서만 살아있지만,
	// 동적할당 받은 메모리는 block 이 끝나도 살아있다.
	

	/* Section (2)  */
	// 주소를 옮겨 받아서 free가 가능하다!
	//free(ptr_backup);
	printf("Dummy Outputs for Debugging\n");

	return 0;
}
