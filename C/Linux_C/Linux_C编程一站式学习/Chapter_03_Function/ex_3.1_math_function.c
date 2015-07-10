/*
 * The example for use math function
 * include math.h and call sin and log function
 * 2015-04-27 17:30
 */

#include<math.h>
#include<stdio.h>

int main(void) {
	double pi = 3.1416;
	printf("sin(pi/2) = %f\nln1 = %f\n", sin(pi/2), log(1.0));
	return 0;
}
