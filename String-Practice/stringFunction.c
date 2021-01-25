#include <stdio.h>

void fit_str(char*, unsigned int);
int main()
{
	/*
		strlen() : returns length of the string
	*/

	char msg[] = "Just,""do it!";
	puts(msg);
	printf("Length %d\n", strlen(msg));
	fit_str(msg, 4);
	puts(msg);
	printf("Length %d\n", strlen(msg));


	/*
		strcat() & strncat()
			-> cat : concatenation 뒤에 붙이기 !
	*/

	char str1[100] = "First string";
	char str2[] = "Second string";

	strcat(str1, ",");
	// 첫 string 뒤에 2(n)글자만 추가!
	strncat(str1, str2, 2);
	puts(str1);


	/* 
		** 문자열 비교 **
		strcmp() and strncmp() : compare strings (not characters)
		
		같으면 0, 
		앞에 것이 아스키코드가 빠르면 -1,
		앞에 것이 아스키코드가 늦으면 1
				
		앞에 것이 글자가 더 많으면 1
		앞에 것이 글자가 더 적으면 -1
	*/


	printf("%d\n", strcmp("A", "A"));
	printf("%d\n", strcmp("B", "A"));
	printf("%d\n", strcmp("A", "B"));
	printf("%d\n", strcmp("Hello", "Hello"));
	printf("%d\n", strcmp("Banana", "Bananas"));
	printf("%d\n", strcmp("Bananas", "Banana"));
	printf("%d\n", strncmp("Bananas", "Banana",6));

	/*
		strcpy() & strncpy()
		문자열을 돌면서 복사
	*/
	char dest[100] = "";
	char source[] = "Start Programing!";
	// strcpy(A,B) : A(destination)에 B(source)를 갖다 붙인다.
	strcpy(dest, source);


	/* 
		sprintf(buf, "%s이어서 붙이기",buf)
	*/
	char buf[100] = "";
	int i = 123;
	double d = 3.14;
	sprintf(buf, "05d.png %f", i, d);
	puts(buf);

	/*
		strchr("Hello World", "W")
		strstr(str1,str2)
				-문자열끼리 비교, 
				str1에서 str2가 나타나는 첫 포인터가 return
	*/				
	return 0;
}

void fit_str(char* str, unsigned int size)
{
	// 마지막에 '\0' 설정해줘서 puts 끊기게 만들기
	if (strlen(str) > size)
		str[size] = '\0';
}