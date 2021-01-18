#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdatomic.h>

// ������ thread���� ������ ���������� ����Ϸ��� �Ҷ� 
// "_Atomic" type qualifier�� ����Ͽ� ���� ����

_Atomic int acnt = 0; // atomic type qualified (C11)

// A normal C function that is excuted as a thread
// when its name is specifiedin pthread_create()
void* myThreadFun(void* vargp)
{
	// ���������� ������ �����忡�� ���������� ����
	int n = 1; //thread storage durtaion
	for (int j = 0; j < 10; j++)
	{
		sleep(1);
		acnt += n; // atomic ������ ������.
		printf("Printing from Thread %d %llu\n", acnt, (unsigned long long) & n);
	}

	return NULL;
}

int main()
{
	// thread identification (thread �ĺ��� ����)
	pthread_t thread_id1, thread_id2;

	printf("Before Thread\n");

	// myThreadFun�� �����Ű�� �ĺ��ڸ� �ּҷ� �־��ش�.

	// Thread 2���� �����Ѵ�.
	// myThreadFun�� 2���� ������(2���� copy)���� ����ȴ�.
	pthread_create(&thread_id1, NULL, myThreadFun, NULL);
	pthread_create(&thread_id2, NULL, myThreadFun, NULL);


	// thread�� ���� ������ ��ٷ��ִ� �Լ�
	// main �Լ��� ���� ������ �ȵǴϱ�, join���� thread ������ ���� ��ٸ��°�
	pthread_join(thread_id1, NULL);
	pthread_join(thread_id2, NULL);

	printf("After Thread\n");
	printf("Atomic %d \n", acnt);
	return 0;

}

// gcc ������ ��, library pthread �߰��ؾ���
/*
	To compile
	$gcc <file-name.c> -o <output-file-name> -lpthread
	
	To run
	$ ./<output-file-name>

*/
