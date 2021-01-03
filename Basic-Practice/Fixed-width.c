#include <stdio.h>
// #include <stdint.h> -- inttypes.h°¡ Æ÷ÇÔ
#include <inttypes.h>
int main()
{
	int i;
	int32_t i32;

	i32 = 1004;

	printf("me32 = %d\n",i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 =%" PRId32 "\n", i32);
	 
	return 0;
}
