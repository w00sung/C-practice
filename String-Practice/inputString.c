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
	//puts(words);	// puts() add \n at the end : �ڵ� �ٹٲ�!
	//puts("END.");


	/* fgets() & fputs() */
	
	char words[100] = "";
					// file �Է½� ���Ǳ� ������, ���ڰ� �߰���
	// fgets�� ���ڿ��� ������������ �𸥴ٰ� �����ϸ鼭 ����ȴ�.
	// ũ�⺸�� ũ�� �޾Ƶ�, ��Ÿ�ӿ����� �߻����� �ʴ´�.
	fgets(words, 100, stdin);

	// fgets�� �������� �ٹٲ� ��ȣ���� �����Ѵ�.
	/* \n�� \0���� ��ü*/
	int i = 0;
	while (words[i] != '\n' && words[i] != '\0')
		i++;
	if (words[i]=='\n')
		words[i] = '\0';

	// ����� stdout�� ��Ÿ���ش�. ���ش�.
	fputs(words, stdout);
	fputs("END", stdout);

	/* ��Ʈ��ŷ���� ���� ���۸� �ݺ��ؼ� ����ϴ� ��� */
	char small_array[5];
	puts("Enter long strings : ");

		// ���۸� ����ؼ� �ݺ��ؼ� �Է¹���
	while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
		puts(small_array);


	return 0;
}
