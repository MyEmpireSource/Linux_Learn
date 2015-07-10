/**
 * 局部变量的存储空间在每次函数调用时分配，在函数返回时释放
 * Show the memory space of local variable is distribution on running every time 
 * and free when the function is runned
 *
 * 2015-05-04 16:40
 */
#include<stdio.h>

void foo(void);

int main(void) {
	foo();
	printf("\n");
	foo();
	printf("^_^\n");
	foo();
	printf("Next test\n");
	foo();
	return 0;
}

void foo(void) {
	// the local variable is uninitialized(not initialization)
	int i;
	printf("%d\n", i);
	i = 777;
}
