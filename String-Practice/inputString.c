#include <stdio.h>

int main()
{
	/*
		scanf() vs gets()
		scanf() reads one word
		gets() reads one line and removes \n and add \0
	
	*/
	//char words[100] = "";
	//gets(words);
	//printf("START\n");
	//printf("%s", words);
	//puts(words);	// puts() add \n at the end : 자동 줄바꿈!
	//puts("END.");


	/* fgets() & fputs() */
	
	char words[100] = "";
					// file 입력시 사용되기 때문에, 인자가 추가됨
	// fgets는 문자열이 언제끝나는지 모른다고 가정하면서 실행된다.
	// 크기보다 크게 받아도, 런타임에러가 발생하지 않는다.
	fgets(words, 100, stdin);

	// fgets는 마지막에 줄바꿈 기호까지 삽입한다.
	/* \n을 \0으로 대체*/
	int i = 0;
	while (words[i] != '\n' && words[i] != '\0')
		i++;
	if (words[i]=='\n')
		words[i] = '\0';

	// 출력은 stdout에 나타내준다. 해준다.
	fputs(words, stdout);
	fputs("END", stdout);

	/* 네트워킹에서 작은 버퍼를 반복해서 사용하는 경우 */
	char small_array[5];
	puts("Enter long strings : ");

		// 버퍼를 사용해서 반복해서 입력받음
	while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
		puts(small_array);


	return 0;
}
