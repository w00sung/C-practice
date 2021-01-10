#include <stdio.h>

int main()
{
	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	// 포인터가 담길 수 있는 공간을 2개 확보
	int* ptr_arr[2] = { arr0,arr1 };

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
			printf("%d(==%d) %d", ptr_arr[j][i], *(ptr_arr[j] + i), *(*(ptr_arr +j) +i));
		printf("\n");
	}

	/* Array  of string of diverse lengths example */

	// name에는 char의 주소를 담을 것이다.
	// 포인터의 배열
					// A가 저장된 위치, J가 저장된 위치 ---
	// string 은 끝에 null을 숨기고 있다.
	char* str = "String";
	// String은 주소를 던진다.
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
