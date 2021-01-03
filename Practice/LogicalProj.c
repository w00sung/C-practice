#define PERIOD '.'
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


int main()
{
	/* 글자수 세기 */
	char ch;
	int count = 0;

	//while ((ch = getchar()) != PERIOD) {
	//	if (ch != '\n' && ch != ' ')
	//		count++;
	//}
	//printf("count : %d", count);

	/* 단어수, 라인 수, 글자 수 세기*/
	int lines = 0;
	int words = 1;
	bool line_flag = false;
	bool word_flag = false;

	while ((ch = getchar()) != PERIOD) {
		// 공백과 엔터에도 단어개수가 추가 될 수 있다.
		// 공백, \n 등 검사하는 것들이 많음
		if (!isspace(ch)) {
			count++;
		}
		// 공백이 아니고, 줄바꿈이 된 것이 아니면
		if (!isspace(ch) && !line_flag) {
			lines++;
			line_flag = true;
		}
		// 새로운 줄이 시작되는 것이다.
		if (ch == '\n')
			line_flag = false;

		// 공백이 아니고, 단어 flag가 false면
		if (!isspace(ch) && !word_flag){
			words++;
			word_flag = true;
		}
		// 공백, 개행되면 단어flag false로 상태 바꿔줌
		if (isspace(ch))
			word_flag = false;
		/// 한글자 한글자 flag상태가 다르다!!
	}
	printf("Characters : %d, Words : %d, Lines :\
: %d", count,words,lines);

	return 0;
}
