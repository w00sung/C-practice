#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int count;

	printf("The command line has %d arguments:\n", argc);


	//// argv[0] : ���������� �̸�!
	//for (count = 0; count < argc; count++)
	//	printf("Arg %d : %s\n", count, argv[count]);
	//
	//printf("\n");

	//int times = atoi(argv[1]);

	//for (int i = 0; i < times; i++)
	//	puts(argv[2]);

	//printf("Sum = %d \n", atoi(argv[1]) + atoi(argv[2]));

	/*
		���ڿ��� base�� �޸��ؼ� ��ȯ�� �����ϴ�.
		string to long, unsigned long, couble
		strtol(), strtoul(), strtod()

		strtod() : 10������ �ٲ� �� �ִ�.
	*/

	char str1[] = "1024Hello";
	char* end;
	//���̻� 10������ �ٲ� �� ���� �κ��� �ּҸ� return �Ѵ�.
	// �Ʒ��� ���, "H"�� ��ġ�� "end"�� return���� ���̴�.
	long l = strtol(str1, &end, 10);
	printf("%s %ld %s %d\n", str1, l, end, (int)*end);

	return 0;
}
