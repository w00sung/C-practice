#include <stdio.h>

int main()
{
	const char* mythings[3] =
	{
		"Dancing",
		"Couting apples",
		"Watching movies"
	};
	char yourthings[3][40] =
	{
		"Studying",
		"Eating",
		"Watching Nextflix"
	};

	const char* temp1 = "Dancing";
	const char* temp2 = "Studying";

					// Dancing �� Read-Only�� ���α׷� �ڵ尡 ����Ǿ��ִ� ���� ��ó�� �����Ѵ�.
					// ������ؼ� �����غ���!
	printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
					// yourthings�� �ش� �۵��� �迭�� ��Ƴ���.
					// �ᱹ Studying �� 2�� ����ȰŴ�.
	printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);


	return 0;
}
