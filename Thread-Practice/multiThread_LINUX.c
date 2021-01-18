#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdatomic.h>

// 각각의 thread에서 동일한 전역변수를 사용하려고 할때 
// "_Atomic" type qualifier를 사용하여 문제 방지

_Atomic int acnt = 0; // atomic type qualified (C11)

// A normal C function that is excuted as a thread
// when its name is specifiedin pthread_create()
void* myThreadFun(void* vargp)
{
	// 지역변수는 각각의 스레드에서 개별적으로 사용됨
	int n = 1; //thread storage durtaion
	for (int j = 0; j < 10; j++)
	{
		sleep(1);
		acnt += n; // atomic 연산은 느리다.
		printf("Printing from Thread %d %llu\n", acnt, (unsigned long long) & n);
	}

	return NULL;
}

int main()
{
	// thread identification (thread 식별자 구분)
	pthread_t thread_id1, thread_id2;

	printf("Before Thread\n");

	// myThreadFun을 실행시키는 식별자를 주소로 넣어준다.

	// Thread 2개를 생성한다.
	// myThreadFun이 2개의 스레드(2개의 copy)에서 실행된다.
	pthread_create(&thread_id1, NULL, myThreadFun, NULL);
	pthread_create(&thread_id2, NULL, myThreadFun, NULL);


	// thread가 끝날 때까지 기다려주는 함수
	// main 함수가 먼저 끝나면 안되니까, join으로 thread 끝나는 것을 기다리는것
	pthread_join(thread_id1, NULL);
	pthread_join(thread_id2, NULL);

	printf("After Thread\n");
	printf("Atomic %d \n", acnt);
	return 0;

}

// gcc 컴파일 시, library pthread 추가해야함
/*
	To compile
	$gcc <file-name.c> -o <output-file-name> -lpthread
	
	To run
	$ ./<output-file-name>

*/
