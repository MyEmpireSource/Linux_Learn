/*
 * get the prime of 0 ~ 100
 *
 * 2015-05-14 14:20
 */
#include<stdio.h>

int is_prime(int n) {
	int i;
	for (i = 2; i < n; ++i) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main(void) {
	int i;
	printf("Show the prime of 0 ~ 100\n");
	
	for (i = 2; i <= 100; ++i) {
		if (is_prime(i)) {			
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}




