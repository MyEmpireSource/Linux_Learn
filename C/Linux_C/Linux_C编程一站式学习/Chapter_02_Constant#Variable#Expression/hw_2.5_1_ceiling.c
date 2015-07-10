/*
 * int x, n; x >= 0; n > 0 
 * get the ceiling value of x/n
 *
 * 2015-04-27 16:40
 */

#include<stdio.h>

int main(void) {

	int x;
	int n;

	printf("Please input two integer:\n");
	scanf("%d", &x);
	scanf("%d", &n);
	printf("You input is x = %d, n = %d\n", x, n);

	printf("The ceiling value of %d/%d is %d\n", x, n, (x + n - 1) / n);

	return 0;
}
