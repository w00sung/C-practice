#include <stdio.h>
void print_star(int width);
void make_nametag(char name, char city);

int main()
{
	int width = 20;
	char name[30] = "Woosung Jeong";
	char city[30] = "Seoul, Korea";

	make_nametag(width, name, city);
	return 0;
}
void print_star(int width)
{
	for (int i = 0; i < width; i++) 
	{
		printf("*");
	}
	printf("\n");
}
void make_nametag(int width, char *name, char *city) 
{
	print_star(width);
	printf("    %s \n", name);
	printf("    %s \n", city);
	print_star(width);
}
