#include <stdio.h>
#include <string.h>

int main()
{
	/* size of arr */
	int int_arr[30]; 
				// in type ���� 30�� ����ҰԿ�
				// "�ּ�"�� ����ȴ�.
				// 120 byte�� �Ҵ� ����
	int* int_ptr = NULL; // �ּҸ� ���� �� �ִ� ����(�޸𸮰��� ���Ҵ�)
	int_ptr = (int*)malloc(sizeof(int) * 30); 
				// OS ���� �̸�ŭ�� "�޸�" �ּ���!
				// memory allocation - malloc : int ���� 30��
				// Runtime �߿� �Ҵ��� ��.

	/* size of character & string */

	char c = 'a';
	char string[10]; // ���� 10�� ������ string ����
					 // 9���� char + '/0' (null character)
								// �������� �� null�� �߰��ȴ�.

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char_size is %zu bytes \n", char_size);
	printf("Size of char_size is %zu bytes \n", str_size);

	/* size of structure */

	// ����ü�� �Ҵ�� �ڷ������� size ��
	
	
	
	/* strlen */
	// strlen �� ������ ������ ���̸� ����.
	// NULL�� ���� ���� �ʴ´�.

	char str_a[100] = "Hello";
	char str_b[] = "Hello";
	char str_c[100] = "\0";
	char str_d[100] = "\n";

	printf("%zu %zu\n", sizeof(str_a), strlen(str_a));
	printf("%zu %zu\n", sizeof(str_b), strlen(str_b));
	printf("%zu %zu\n", sizeof(str_c), strlen(str_c));
	printf("%zu %zu\n", sizeof(str_d), strlen(str_d));



	/* NULL ���� ����ϴ� printf  */
	char str3[20] = "Hello, \0World";
	printf("%s", str3); // NULL ���� ����Ѵ�.

	return 0;
}
