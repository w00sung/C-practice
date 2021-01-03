#include <stdio.h>
#include <string.h>

int main()
{
	/* size of arr */
	int int_arr[30]; 
				// in type 공간 30개 사용할게요
				// "주소"가 저장된다.
				// 120 byte를 할당 해줌
	int* int_ptr = NULL; // 주소를 적을 수 있는 종이(메모리공간 미할당)
	int_ptr = (int*)malloc(sizeof(int) * 30); 
				// OS 에게 이만큼의 "메모리" 주세요!
				// memory allocation - malloc : int 공간 30개
				// Runtime 중에 할당이 됨.

	/* size of character & string */

	char c = 'a';
	char string[10]; // 문자 10개 저장할 string 변수
					 // 9개의 char + '/0' (null character)
								// 마지막에 꼭 null이 추가된다.

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char_size is %zu bytes \n", char_size);
	printf("Size of char_size is %zu bytes \n", str_size);

	/* size of structure */

	// 구조체에 할당된 자료형들의 size 합
	
	
	
	/* strlen */
	// strlen 은 오로지 문자의 길이만 센다.
	// NULL은 절대 세지 않는다.

	char str_a[100] = "Hello";
	char str_b[] = "Hello";
	char str_c[100] = "\0";
	char str_d[100] = "\n";

	printf("%zu %zu\n", sizeof(str_a), strlen(str_a));
	printf("%zu %zu\n", sizeof(str_b), strlen(str_b));
	printf("%zu %zu\n", sizeof(str_c), strlen(str_c));
	printf("%zu %zu\n", sizeof(str_d), strlen(str_d));



	/* NULL 까지 출력하는 printf  */
	char str3[20] = "Hello, \0World";
	printf("%s", str3); // NULL 까지 출력한다.

	return 0;
}
