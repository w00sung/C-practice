#include <stdio.h>

#define MAXLENGTH 81
#define MESSAGE "A symbolic string contant"
int main()
{
	char words[MAXLENGTH] = "A string in an array";
							// \0 포함 21글자
							// 모두 초기화 시키라고 경고해줌
	const char* pt1 = "A pointer to a string.";
	puts("Puts() adds a newline at the end : ");
	puts(MESSAGE);
	
	/* 배열이든 주소든 puts는 동일하게 작동*/
	puts(words);
	puts(pt1);

	words[3] = 'p';
	//pt1[8] = 'A';
	/* 읽기 전용 메모리에 저장된 데이터값을 바꾸려고 시도하면
	운영체제가 중단시킨다. */

	/* 배열은 읽기 & 쓰기가 모두 가능한 메모리 사용
	문자열 리터럴은 프로그램의 일부이기 때문에,
	읽기 전용 메모리에 저장되어 있다.
	*/

		/*%s: 문자열, %p : 주소, %c : 첫 알파벳 주소를 역참조 */
	printf("%s, %p, %c\n", "We", "are", *"excellent programmers");



	return 0;
}
