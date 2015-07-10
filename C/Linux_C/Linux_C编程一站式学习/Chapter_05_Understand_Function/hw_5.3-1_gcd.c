/**
 * 用Edclidal算法求正整数a和b的最大公约数
 * get the GCD(Greatest Common Divisor), use Edclidal gorithm;
 *
 * a, b are integer, a > 0; b >0
 * if a % b == 0, the GCD of a and b is b
 * if a % b != 0, the GCD of a and b is equals of the GCD of b and (a % b) 
 */

#include<stdio.h>

int get_GCD(int a, int b) {

	if (a % b == 0) {
		return b;
	} else {
		return get_GCD(b, a % b);
	}
}

int main(void) {
	int a;
	int b;
	int gcd;

	printf("Please input two Integer: ");
	scanf("%d %d", &a, &b);
	/*
	if (a < 0) {
		a = -a;
	}

	if (b < 0) {
		b = -b;
	}
	*/

	/*
	if (a < b) {
		gcd = a;
		a = b;
		b = gcd;
	}
	*/

	gcd = get_GCD(a, b);

	printf("The GCD of %d and %d is %d\n", a, b, gcd);

	return 0;
}




