/**
 * get the random num into array;
 *
 * 2015-05-29 16:40
 */

#include<stdio.h>
#include<stdlib.h>

#define N 20

int a[N];

void gen_random(int upper_bound) {
	int i;
	for (i = 0; i < N; ++i) {
		a[i] = rand() % upper_bound;
	}
}

void print_random() {
	int i;
	printf("a[%d] = {", N);
	for (i =0; i < N; ++i) {
		if (i == N - 1) {
			printf("%d}\n", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}
}

int main(void) {
	gen_random(10);
	print_random();
	return 0;
}





