#define PERIOD '.'
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


int main()
{
	/* ���ڼ� ���� */
	char ch;
	int count = 0;

	//while ((ch = getchar()) != PERIOD) {
	//	if (ch != '\n' && ch != ' ')
	//		count++;
	//}
	//printf("count : %d", count);

	/* �ܾ��, ���� ��, ���� �� ����*/
	int lines = 0;
	int words = 1;
	bool line_flag = false;
	bool word_flag = false;

	while ((ch = getchar()) != PERIOD) {
		// ����� ���Ϳ��� �ܾ���� �߰� �� �� �ִ�.
		// ����, \n �� �˻��ϴ� �͵��� ����
		if (!isspace(ch)) {
			count++;
		}
		// ������ �ƴϰ�, �ٹٲ��� �� ���� �ƴϸ�
		if (!isspace(ch) && !line_flag) {
			lines++;
			line_flag = true;
		}
		// ���ο� ���� ���۵Ǵ� ���̴�.
		if (ch == '\n')
			line_flag = false;

		// ������ �ƴϰ�, �ܾ� flag�� false��
		if (!isspace(ch) && !word_flag){
			words++;
			word_flag = true;
		}
		// ����, ����Ǹ� �ܾ�flag false�� ���� �ٲ���
		if (isspace(ch))
			word_flag = false;
		/// �ѱ��� �ѱ��� flag���°� �ٸ���!!
	}
	printf("Characters : %d, Words : %d, Lines :\
: %d", count,words,lines);

	return 0;
}
