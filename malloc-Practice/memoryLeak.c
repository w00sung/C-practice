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
	// ptr ������ block �ȿ����� ���������,
	// �����Ҵ� ���� �޸𸮴� block �� ������ ����ִ�.
	

	/* Section (2)  */
	// �ּҸ� �Ű� �޾Ƽ� free�� �����ϴ�!
	//free(ptr_backup);
	printf("Dummy Outputs for Debugging\n");

	return 0;
}
