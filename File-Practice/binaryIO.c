#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Writing Block
	{
		FILE* fp = fopen("binary_file", "wb");

		double d = 1.0 / 3.0;
		int n = 123;

		/* when �����Ҵ� ->>>>> ���� ���� �޶����� �������� ���� ���� �����Ҵ��� �ǽ��� �� �ִ�. */
		int* parr = (int*)malloc(sizeof(int) * n);
		// if malloc Error
		if (!parr) exit(1);
		// 123 ���� ������ parr ���ۿ� �Է��ϱ�
		for (int n = 0; n < 123; ++n)
			*(parr + n) = n * 2;

		// d ���� sizeof(d)��ŭ 1��  fp �� ���ش�. --- d�� fp�� ���ش� : 8 byte
		fwrite(&d, sizeof(d), 1, fp);
		// n ���� sizeof(n)��ŭ 1��  fp �� ���ش�. --- n�� fp�� ���ش� : 4 byte
		fwrite(&n, sizeof(n), 1, fp);
		// parr ���� sizeof(int)��ŭ n��  fp �� ���ش�. --- parr�� fp�� ���ش� : 4 byte * 123
		fwrite(parr, sizeof(int), n, fp);

		fclose(fp);
		free(parr);
	}

	// Reading
	{
		FILE* fp = fopen("binary_file", "rb");
		double d;
		int n = 0;

		// fread (����? , ��ŭ , �?, ��𿡼�)
		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int* parr = (int*)malloc(sizeof(int) * n);
		if (!parr) exit(1);

		fread(parr, sizeof(int), n, fp);

		// eof�� ������? : ����� ������ŭ �о�����, EOF�� �������� ������ ���̴�.
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
	fwrite & fread ��� �ᱹ ������ Ȱ���Ͽ� ����, �д� ���̴�.
	-> ������ ���ڰ� fp
	fwrite : ��𿡼� ���Ϸ� ���ž�?
	fread : ���� ������ �����ž�?

*/
