#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31
int main()
{
	FILE* fp;
	char words[MAX] = { '\0', };

	const char* filename = "record.txt";
							
						// "w+"로 파일을 받아야 없으면 생성함
	if ((fp = fopen(filename, "w+")) == NULL)
	{
		fprintf(stderr, "Can't open \" % s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}
						// 입력이 1개 제대로 들어왔느냐 && // '첫글자'가 마침표면 끝낸다.
	//while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.'))
	//	fprintf(fp, "%s\n", words);
	//	// 출력을 fp에 할 것이다.
		
				// fgets(버퍼, 최대 몇개, 어디서?) , EOF는 NULL로 대체한다.
				// stdin 표준 입력에서 words(버퍼)로 옮긴다.
	while ((fgets(words, MAX, stdin) != NULL) && (words[0] != '.'))
		fputs(words, fp);

	rewind(fp); /* go back to beginning of file : 다시 처음으로 돌아간다. */

		// 어디서? : fp에서 읽어온다.
		// fp에서 words(버퍼)로 옮긴다.
	while ((fgets(words, MAX, fp) != NULL))
		fputs(words, stdout);

	//while (fscanf(fp, "%s", words) != EOF)
	//	fprintf(stdout, "%s\n", words);
	//	// 출력을 stdout으로 하면, 그냥 출력과 동일해진다.

	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	return 0;
}
