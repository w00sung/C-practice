#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	while (1) {
		printf("Current count is %d Continue? (y/n)\n", count);
		
		int c = getchar();
		// 첫글자 n이면 break
		if (c == 'n')
			break;
		// 첫글자 y면 count ++
		else if (c == 'y')
		{
			count++;
		}
		else
		{
			printf("Please input 'y' or 'n'\n");
		}
		// 첫글자와 줄바꿈(enter)를 제외하고는 버퍼에 쌓지 않는다.
		while (getchar() != '\n')
			continue;

	
	}
	return 0;
}
