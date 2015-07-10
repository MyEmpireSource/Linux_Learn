/**
 *
 * 2015-06-08
 */

#include<stdio.h>

#define N 3

int a[N];

void print_array() {

	int i;
	for (i = 0; i < N; ++i) {
		if ( i == N - 1) {
			printf("%d\n", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}
}

int main(void) {
	int i;
	for (i = 0; i < N; ++i) {
		a[i] = i + N;
	}
	print_array();

	return 0;
}

