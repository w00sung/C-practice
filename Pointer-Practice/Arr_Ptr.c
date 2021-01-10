#include <stdio.h>

double average(double* arr, int n)
{
	// 배열의 크기도 던져줘야한다.
	double avg = 0.0;
	for (int i = 0; i < n; i++)
	{
		avg += *(arr + i);
	}
	avg /= (double)n;
	return avg;

}

double average_twoPtr(double* strt, double* end)
{
	int count = 0;
	// 포인터 연산이 가능하다. (배열의 크기)
	int alr_count = end - strt;
	double avg = 0.0;
	while (strt < end)
	{
		//*strt++ == (*strt) -> strt++;
		avg += *strt++;
		count++;
	}
	avg /= (double)count;
	return avg;
}

int main()
{
	double arr1[5] = { 10,13,12,7,8 };
	double arr2[5] = { 1.0, 2.0, 3.0, 4.0,5.0 };
	double arr3[3] = { 1.8, -0.2,6.3 };

	printf("SIZE of arr2 = %d", sizeof(arr2));

	printf("AVG = %f\n", average(arr1, 5));
	printf("AVG = %f\n", average(arr2, sizeof(arr2) / sizeof(double)));
	printf("AVG = %f\n", average(arr3, sizeof(arr3) / sizeof(double)));

	return 0;
}
