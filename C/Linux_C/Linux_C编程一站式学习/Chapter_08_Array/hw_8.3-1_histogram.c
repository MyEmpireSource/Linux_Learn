/**
 * show the histogram of random
 * 
 * 把随机数以直方图形式显示
 *
 * 2015-06-04 15:00
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100
#define UPPER_BOUND 12

int a[N];

void gen_random(int upper_bound) {
	int i;
	for (i = 0; i < N; ++i) {
		a[i] = rand() % upper_bound;
	}
}

int main(void) {
	int i;
	int histogram[UPPER_BOUND] = {0};
	int random_num;

	srand(time(NULL));

	gen_random(UPPER_BOUND);
	

	for (i = 0; i < N; ++i) {
		printf("%d ", a[i]);
		++histogram[a[i]];
	}
	printf("\n\n");

	for (i = 0; i < UPPER_BOUND; ++i) {
		if (i == UPPER_BOUND - 1) {
			printf("%d\n", i);
		} else {
			printf("%d\t", i);
		}
	}

	random_num = N;
	while (random_num > 0) {

		for (i = 0; i < UPPER_BOUND; ++i) {
			if (histogram[i] > 0) {
				printf("*\t");
				--histogram[i];
				--random_num;
			} else {
				printf(" \t");
			}
		}
		printf("\n");
	}
	return 0;
}

