#include <stdio.h>

// block 밖에서는 초기화 가능하다.
// 단, 기존에 초기화 되어있으면 안된다.
/// -- extern 있는 곳에서는 초기화 하지 않도록 RULE을 만들자

// extern int g_int = 8;

void fun_sec()
{
	// External Linkage
	extern int g_int;
	
	g_int += 7;
	printf("gint in fun_sec() %d %p\n", g_int, &g_int);

}
