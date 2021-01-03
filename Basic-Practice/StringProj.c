#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char fruit_name[40];

	printf("What is your favorite ?\n");

	scanf("%s", fruit_name);

	printf("You like %s \n", fruit_name);
	
	return 0;
}
