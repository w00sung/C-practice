#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	while (1) {
		printf("Current count is %d Continue? (y/n)\n", count);
		
		int c = getchar();
		// ù���� n�̸� break
		if (c == 'n')
			break;
		// ù���� y�� count ++
		else if (c == 'y')
		{
			count++;
		}
		else
		{
			printf("Please input 'y' or 'n'\n");
		}
		// ù���ڿ� �ٹٲ�(enter)�� �����ϰ�� ���ۿ� ���� �ʴ´�.
		while (getchar() != '\n')
			continue;

	
	}
	return 0;
}
