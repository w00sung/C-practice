#include <stdio.h>
#define MONTHS 12
int main()
{
	int high[MONTHS];
	// static���� �迭 ����� 0���� �ʱ�ȭ
	static int non_init[3];
	for (int i = 0; i < MONTHS; i++)
		// �ʱ�ȭ ���� ���� �迭 �ٷ�����!
		// ���� �Ϻθ� ����� ������ �� �ʱ�ȭ ������
		printf("%d", high[i]);

	// �����
	const int temp = 0;
	// �迭�� ���� �ٲ� �� ����.
	const int low[3] = { -7,-5,1 };

	return 0;
}
