/**
 * get the value of Fibonacci
 * f(0) = 1
 * f(1) = 1
 * f(n) = f(n - 1) + f(n - 2);
 *
 * 2015-05-12 15:20
 */

#include<stdio.h>

int fibonacci(int n) {
	if (n < 0) {
		printf("Error! the %d < 0", n);
		return -1;
	}

	if (n == 0 || n ==1) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(void) {
	int n;
	printf("Please input a integer: ");
	scanf("%d", &n);
	printf("fibonacci(%d) = %d\n", n, fibonacci(n));

	return 0;
}




