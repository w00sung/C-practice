#include <stdio.h>

int main()
{
	int arr0[3] = { 1,2,3 };
	int arr1[3] = { 4,5,6 };

	int* parr[2] = { arr0,arr1 };
	// arr0[0] = parr[0][0]과 같이 표현할 수 있다.
	// arr0[0] = *(parr[0]+0) or *(*(parr+0)+0)

	/* Pointer Compatibility */

	int n = 5;
	double x;
	x = n;
	int* p1 = &n;
	double* pd = &x;

	// int타입의 주소에 double타입의 주소를 던진다.
	// pd = p1; // WARNING

	int* pt;
	int(*pa)[3]; // pa는 포인터인데, 3개짜리 배열을 담는 ptr
	int ar1[2][3] = { 3, };
	int ar2[3][2] = { 2, };

	pa = ar1; // pa는 배열이 [3] 짜리를 저장할 수 있는 공간
	pa = ar2; // ar2는 배열이 [2] 짜리 3칸 이다.
	
	int x = 20;
	const int y = 32;
	// const를 왼쪽에 붙여주면, (const int)의 주소를 저장하는 p2
	const int* p2 = &y;
	const int** pp2 = &p1;
	
	
	
	return 0;
}
