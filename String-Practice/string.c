#include <stdio.h>

#define MAXLENGTH 81
#define MESSAGE "A symbolic string contant"
int main()
{
	char words[MAXLENGTH] = "A string in an array";
							// \0 ���� 21����
							// ��� �ʱ�ȭ ��Ű��� �������
	const char* pt1 = "A pointer to a string.";
	puts("Puts() adds a newline at the end : ");
	puts(MESSAGE);
	
	/* �迭�̵� �ּҵ� puts�� �����ϰ� �۵�*/
	puts(words);
	puts(pt1);

	words[3] = 'p';
	//pt1[8] = 'A';
	/* �б� ���� �޸𸮿� ����� �����Ͱ��� �ٲٷ��� �õ��ϸ�
	�ü���� �ߴܽ�Ų��. */

	/* �迭�� �б� & ���Ⱑ ��� ������ �޸� ���
	���ڿ� ���ͷ��� ���α׷��� �Ϻ��̱� ������,
	�б� ���� �޸𸮿� ����Ǿ� �ִ�.
	*/

		/*%s: ���ڿ�, %p : �ּ�, %c : ù ���ĺ� �ּҸ� ������ */
	printf("%s, %p, %c\n", "We", "are", *"excellent programmers");



	return 0;
}
