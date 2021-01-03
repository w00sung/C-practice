#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{	
	// 4byte 이니, 32개 가능
	unsigned int i = 0b11111111111111111111111111111111;
	unsigned int u_max = UINT_MAX + 1; // limits.h - 매크로
	unsigned int u_min = 0; // unsigned의 최소값은 0이다.
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
