#include <stdio.h>

int main()
{
	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	int* parr[2] = { arr0,arr1 };
	// arr0[0] = parr[0][0]�� ���� ǥ���� �� �ִ�.
	// arr0[0] = *(parr[0]+0) or *(*(parr+0)+0)

	/* Pointer Compatibility */

	int n = 5;
	double x;
	x = n;
	int* p1 = &n;
	double* pd = &x;

	// intŸ���� �ּҿ� doubleŸ���� �ּҸ� ������.
	// pd = p1; // WARNING

	int* pt;
	int(*pa)[3]; // pa�� �������ε�, 3��¥�� �迭�� ��� ptr
	int ar1[2][3] = { 3, };
	int ar2[3][2] = { 2, };

	pa = ar1; // pa�� �迭�� [3] ¥���� ������ �� �ִ� ����
	pa = ar2; // ar2�� �迭�� [2] ¥�� 3ĭ �̴�.
	
	int x = 20;
	const int y = 32;
	// const�� ���ʿ� �ٿ��ָ�, (const int)�� �ּҸ� �����ϴ� p2
	const int* p2 = &y;
	const int** pp2 = &p1;
	
	
	
	return 0;
}
