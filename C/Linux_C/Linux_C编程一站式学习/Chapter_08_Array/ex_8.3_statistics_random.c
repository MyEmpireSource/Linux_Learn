/**
 * get some random num into array, and statistics every number's count
 *
 * 统计随机数的发布
 *
 * 2015-06-01 16:25
 */

#include<stdio.h>
#include<stdlib.h>

#define N 100000

int a[N];

void gen_random(int upper_bound) {
	int i;
	for (i = 0; i < N; ++i) {
		a[i] = rand() % upper_bound;
	}
}

int how_many(int value) {
	int count = 0;
	int i;

	for (i = 0; i < N; ++i) {
		if (a[i] == value) {
			++count;
		}
	}

	return count;
}

int main(void) {
	int i;
	gen_random(10);
	printf("value\thow many\n");

	for( i = 0; i < 10; ++i) {
		printf("%d\t%d\n", i, how_many(i));
	}
	return 0;
}









