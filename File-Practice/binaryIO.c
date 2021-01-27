#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Writing Block
	{
		FILE* fp = fopen("binary_file", "wb");

		double d = 1.0 / 3.0;
		int n = 123;

		/* when 동적할당 ->>>>> 매일 매일 달라지는 데이터의 수에 맞춰 동적할당을 실시할 수 있다. */
		int* parr = (int*)malloc(sizeof(int) * n);
		// if malloc Error
		if (!parr) exit(1);
		// 123 개의 정수를 parr 버퍼에 입력하기
		for (int n = 0; n < 123; ++n)
			*(parr + n) = n * 2;

		// d 에서 sizeof(d)만큼 1번  fp 로 써준다. --- d를 fp에 써준다 : 8 byte
		fwrite(&d, sizeof(d), 1, fp);
		// n 에서 sizeof(n)만큼 1번  fp 로 써준다. --- n을 fp에 써준다 : 4 byte
		fwrite(&n, sizeof(n), 1, fp);
		// parr 에서 sizeof(int)만큼 n번  fp 로 써준다. --- parr을 fp에 써준다 : 4 byte * 123
		fwrite(parr, sizeof(int), n, fp);

		fclose(fp);
		free(parr);
	}

	// Reading
	{
		FILE* fp = fopen("binary_file", "rb");
		double d;
		int n = 0;

		// fread (어디로? , 얼만큼 , 몇개?, 어디에서)
		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int* parr = (int*)malloc(sizeof(int) * n);
		if (!parr) exit(1);

		fread(parr, sizeof(int), n, fp);

		// eof를 만났나? : 저장된 개수만큼 읽었으면, EOF를 만날일이 없었을 것이다.
		printf("feof = %dn", feof(fp));

		printf("%f\n", d);
		printf("%d\n", n);
		for (int i = 0; i < n; ++i)
			printf("%d ", *(parr + i));
		printf("\n");

		fclose(fp);
		free(parr);
	}
	return 0;
}
/*
* 
	fwrite & fread 모두 결국 파일을 활용하여 쓰고, 읽는 것이다.
	-> 마지막 인자가 fp
	fwrite : 어디에서 파일로 쓸거야?
	fread : 어디로 파일을 읽을거야?

*/
