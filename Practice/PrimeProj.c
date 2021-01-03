#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	unsigned num = 0;
	int isPrime = 1;

	printf("Input the number : ");
	scanf("%u", &num);

	// 제곱근까지 진행하면됨
	for (unsigned i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			
			isPrime = 0;
			break;
		}
	}

	if (isPrime) {
		printf("%u is a prime number", num);
	}
	else {
		printf("%u is not a prime number", num);
	}
	return 0;
}
