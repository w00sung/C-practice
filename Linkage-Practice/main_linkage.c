#include <stdio.h>

// block �ۿ����� �ʱ�ȭ �����ϴ�.
// ��, ������ �ʱ�ȭ �Ǿ������� �ȵȴ�.
/// -- extern �ִ� �������� �ʱ�ȭ ���� �ʵ��� RULE�� ������

// extern int g_int = 8;

void fun_sec()
{
	// External Linkage
	extern int g_int;
	
	g_int += 7;
	printf("gint in fun_sec() %d %p\n", g_int, &g_int);

}
