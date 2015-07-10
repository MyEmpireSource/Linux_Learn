/*
 * 2015-05-19 16:20
 */

#include<stdio.h>

struct rational {
	int numerator; //分子
	int denominator; //分母
};

int get_GCD(int a, int b) {
	if (a % b == 0) {
		return b;
	} else {
		return get_GCD(b, a % b);
	}
}

int get_LCM(int a, int b) {
	return (a * b) / get_GCD(a, b);
}

int get_numerator(struct rational r) {
	return r.numerator;
}

int get_denominator(struct rational r) {
	return r.denominator;
}

int check_rational(struct rational r) {
	if (get_denominator(r) == 0) {
		printf("Error!! the denominator is 0!!");
		return 1;
	}
	return 0;
}

struct rational make_rational(int numer, int denom) {
	struct rational r;
	int gcd;
	
	if (denom < 0) {
		denom = -denom;
		numer = -numer;
	}
	
	if (numer == 0) {
		gcd = denom;
	} else {
		gcd = get_GCD(denom, numer);
	}

	if (gcd < 0) {
		gcd = -gcd;
	}
	
	r.numerator = numer / gcd;
	r.denominator = denom / gcd;

	return r;
}

int printf_rational(struct rational r) {
	
	if (check_rational(r)) {
		return 1;
	} else if (get_numerator(r) == 0) {
		printf("0");
	} else {
		printf("%d/%d", r.numerator, r.denominator);
	}
	return 0;
}

struct rational rational_add(struct rational r1, struct rational r2) {
	
	int lcm = get_LCM(get_denominator(r1), get_denominator(r2));
	
	return make_rational(lcm / get_denominator(r1) * get_numerator(r1) + \
			lcm / get_denominator(r2) * get_numerator(r2), lcm);
}

int main(void) {
	int numer;
	int denom;
	struct rational r1;
	struct rational r2;
	struct rational result;
	printf("Please input two integer to get rational: ");
	scanf("%d %d", &numer, &denom);
	
	r1 = make_rational(numer, denom);
	
	printf("Please input two integer to get other rational: ");
	scanf("%d %d", &numer, &denom);
	r2 = make_rational(numer, denom);

	//show add
	if (printf_rational(r1)) {
		return 1;
	}
	printf (" + ");
	if (printf_rational(r2)) {
		return 1;
	}

	result = rational_add(r1, r2);
	printf(" = ");
	if (printf_rational(result)) {
		return 1;
	}
	printf(";\n");


	return 0;
}
