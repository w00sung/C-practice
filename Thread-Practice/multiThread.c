#include <stdio.h>
#include <Windows.h>


// window 표준
DWORD WINAPI ThreadFunc(void* data)
{
	int n = 1;
	Sleep(1000);

	// Atomic 사용 불가능할 때, 전역변수 충돌방지 : lock 한다
	// acnt += n ; 
	printf("Printing from Thread \n");
	return 0;
}

int main()
{
	// thread를 만들면서, 특정 함수를 실행시킨다.
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);

	// 끝날 때 까지 기다린다.
	if (thread)
		WaitForSingleObject(thread, INFINITE);
}
