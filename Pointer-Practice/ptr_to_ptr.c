#include <stdio.h>

int main()
{
	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	// �����Ͱ� ��� �� �ִ� ������ 2�� Ȯ��
	int* ptr_arr[2] = { arr0,arr1 };

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
			printf("%d(==%d) %d", ptr_arr[j][i], *(ptr_arr[j] + i), *(*(ptr_arr +j) +i));
		printf("\n");
	}

	/* Array  of string of diverse lengths example */

	// name���� char�� �ּҸ� ���� ���̴�.
	// �������� �迭
					// A�� ����� ��ġ, J�� ����� ��ġ ---
	// string �� ���� null�� ����� �ִ�.
	char* str = "String";
	// String�� �ּҸ� ������.
	printf("%c\n",*str);
	printf("%p\n", str);
	printf("%s\n", str);

	char* name[] = { "Aladdin","Jasmine","Magic Carpet", "Genie" };

	const int n = sizeof(name) / sizeof(char*);
	
	for (int i = 0; i < n; i++)
		printf("%s at %u\n", name[i], (unsigned)name[i]);
	printf("\n");
	return 0;
}
