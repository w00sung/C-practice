#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int count;

	printf("The command line has %d arguments:\n", argc);


	//// argv[0] : 실행파일의 이름!
	//for (count = 0; count < argc; count++)
	//	printf("Arg %d : %s\n", count, argv[count]);
	//
	//printf("\n");

	//int times = atoi(argv[1]);

	//for (int i = 0; i < times; i++)
	//	puts(argv[2]);

	//printf("Sum = %d \n", atoi(argv[1]) + atoi(argv[2]));

	/*
		문자열을 base를 달리해서 변환이 가능하다.
		string to long, unsigned long, couble
		strtol(), strtoul(), strtod()

		strtod() : 10진수만 바꿀 수 있다.
	*/

	char str1[] = "1024Hello";
	char* end;
	//더이상 10진수로 바꿀 수 없는 부분의 주소를 return 한다.
	// 아래의 경우, "H"의 위치를 "end"에 return했을 것이다.
	long l = strtol(str1, &end, 10);
	printf("%s %ld %s %d\n", str1, l, end, (int)*end);

	return 0;
}
