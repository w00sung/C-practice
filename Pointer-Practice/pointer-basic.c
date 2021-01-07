#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int a, b;
  a = 123;
  int *a_ptr;

  a_ptr = &a;  // 주소의 가장 앞에 값 불러오기

  printf("a = %d\n*a_ptr = %d\n&a = %p\n", a, *a_ptr, a_ptr);

  *a_ptr = 456;
  printf("-----*a_ptr is !chged!------\n");
  printf("a = %d\n*a_ptr = %d\n&a = %p\n", a, *a_ptr, a_ptr);

  // b = a_ptr; -- int형에 주소 넣지 못한다.

  printf("------ b = *a_ptr ------");

  b = *a_ptr;
  printf("b = %d\n*a_ptr = %d\n&a = %p\n b = %p\n", a, *a_ptr, a_ptr, &b);

  return 0;
}
