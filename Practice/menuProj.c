#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_count(void);
char get_choice(void);

int main()
{
	char c;
	int user_choice;
	
	while ((user_choice = get_choice()) != 'q') 
	{
		printf("a : avengers \t b: bell \n c : count \t q: quit\n");
		
		/*if ((c = getchar()) == 'q') break;*/

		if (c == 'a')
		{
			printf("Avengers assemble!\n");
		}
		else if (c == 'b')
		{
			printf("\a");
		}
		else if (c == 'c')
		{
			int num;
			printf("Input integer : ");
			scanf("%d", &num);
			get_count(num);
		}
	}
	return 0;
}

void get_count(int num)
{
	for (int i = 1; i <= num; i++)
	{
		printf("%d\n", i);
	}
}
// 문자 받기
char get_choice(void)
{

	char c;
	c = getchar();
	// 문자 받기!
	while (getchar() != '\n')
		continue;
	
	return c;
}