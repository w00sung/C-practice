#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{	
	// 4byte �̴�, 32�� ����
	unsigned int i = 0b11111111111111111111111111111111;
	unsigned int u_max = UINT_MAX + 1; // limits.h - ��ũ��
	unsigned int u_min = 0; // unsigned�� �ּҰ��� 0�̴�.
	signed int i_max = INT_MAX;

	char buffer[33];
	_itoa(u_max, buffer, 2);

	printf("decimal : %u\n", u_max);
	printf("binary: %s\n", buffer);
	
	//printf("%u\n", i); // unsigned int : %u
	//printf("%u\n", u_max);

	//printf("%u\n", sizeof(unsigned int));
	//printf("%u", sizeof(i)); // 4 byte
	return 0;
}
