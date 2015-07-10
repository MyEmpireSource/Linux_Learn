/*
 * Show math.h's ceil and floor function
 *
 * ceil 向上取整
 * floor 向下取整
 *
 * 2015-05-07 11:40
 */

#include<stdio.h>
#include<math.h>

int main(void) {
	double x;
	printf("Please input a double number: ");
	scanf("%lf", &x);

	printf("the ceil and floor function is from math.h\n");
	printf("ceil : 向上取整; floor : 向下取整\n");
	printf("\nceil(%lf) = %lf, floor(%lf) = %lf\n", x, ceil(x), x, floor(x));

	x = -x;
	printf("ceil(%lf) = %lf, floor(%lf) = %lf\n", x, ceil(x), x, floor(x));

	return 0;
}
