#include <stdio.h>
#include <Windows.h>


// window ǥ��
DWORD WINAPI ThreadFunc(void* data)
{
	int n = 1;
	Sleep(1000);

	// Atomic ��� �Ұ����� ��, �������� �浹���� : lock �Ѵ�
	// acnt += n ; 
	printf("Printing from Thread \n");
	return 0;
}

int main()
{
	// thread�� ����鼭, Ư�� �Լ��� �����Ų��.
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);

	// ���� �� ���� ��ٸ���.
	if (thread)
		WaitForSingleObject(thread, INFINITE);
}
