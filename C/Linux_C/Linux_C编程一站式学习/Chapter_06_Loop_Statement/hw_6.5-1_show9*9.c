/*
 * show 9*9
 * 2015-05-14 16:00
 */

#include<stdio.h>

int main(void) {
	int i;
	int j;

	for (i = 1; i <= 9; ++i) {
		for (j = 1; j <= i; ++j) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}
	printf("%d %d %d\n", 3/2, 5/2, 7/2);
	return 0;
}
