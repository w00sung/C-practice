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
			-> cat : concatenation �ڿ� ���̱� !
	*/

	char str1[100] = "First string";
	char str2[] = "Second string";

	strcat(str1, ",");
	// ù string �ڿ� 2(n)���ڸ� �߰�!
	strncat(str1, str2, 2);
	puts(str1);


	/* 
		** ���ڿ� �� **
		strcmp() and strncmp() : compare strings (not characters)
		
		������ 0, 
		�տ� ���� �ƽ�Ű�ڵ尡 ������ -1,
		�տ� ���� �ƽ�Ű�ڵ尡 ������ 1
				
		�տ� ���� ���ڰ� �� ������ 1
		�տ� ���� ���ڰ� �� ������ -1
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
		���ڿ��� ���鼭 ����
	*/
	char dest[100] = "";
	char source[] = "Start Programing!";
	// strcpy(A,B) : A(destination)�� B(source)�� ���� ���δ�.
	strcpy(dest, source);


	/* 
		sprintf(buf, "%s�̾ ���̱�",buf)
	*/
	char buf[100] = "";
	int i = 123;
	double d = 3.14;
	sprintf(buf, "05d.png %f", i, d);
	puts(buf);

	/*
		strchr("Hello World", "W")
		strstr(str1,str2)
				-���ڿ����� ��, 
				str1���� str2�� ��Ÿ���� ù �����Ͱ� return
	*/				
	return 0;
}

void fit_str(char* str, unsigned int size)
{
	// �������� '\0' �������༭ puts ����� �����
	if (strlen(str) > size)
		str[size] = '\0';
}