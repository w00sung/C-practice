#include <stdio.h>

int main()
{
	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	int i;
	// �迭 �̸��� �ּҴ�.
	ptr1 = arr;
									  //������ ������ �ּ�(����������)
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

	// �迭�� 3��° ������ �ּ�
	ptr2 = &arr[2];
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	// �����Ϳ� + ���� : ������ ���� ��ŭ �̵�
	// +4 == 4byte�� 4�� ����Ǵ� ��ŭ ���Ѵ�.
	ptr3 = ptr1 + 4;

	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	
	// Differencing
		//%td : �������� ���̸� ����� �� ���!!!
	printf("%td\n", ptr3 - ptr1);

	// subtracing
	ptr3 = ptr3 - 4;

	// �����ϴ�
	ptr1++;
	*ptr1++;

	/* ������ ���� �� */
	// ���� ���¿��� ��, �񱳰� �����ϴ�.
	// �����͵� �ᱹ ������!

	return 0;
}
