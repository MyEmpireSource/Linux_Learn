/**
 * get the random num in [10,20] by use rand() 
 *
 * 用rand函数生成[10, 20]之间的随机整数
 *
 * 2015-06-01 16:40
 */

#include<stdio.h>
#include<stdlib.h>

#define N 50

int a[N];

int main(void) {
	int i;

	for (i = 0; i < N; ++i) {
		a[i] = rand() % 11 + 10;
	}
	for (i = 0; i < N; ++i) {
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
