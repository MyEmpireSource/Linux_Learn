/*
 * 四舍五入
 * myround(double x) get the round;
 * eg: myround(-3.51) = -4.0; myround(4.49) = 4.0
 *
 * 2015-05-07 15:10
 */

#include<stdio.h>
#include<math.h>

double myround(double x) {

	if (x >= 0) {i
		// floor 向下取整, floor(15.6) = 15
		return floor(x + 0.5);
	} else {
		//ceil 向上取整 ceil(15.2) = 16
		return ceil(x - 0.5);
	}
}

int main(void) {
	double x = 0.0;
	printf("Please input a double number: ");
	scanf("%lf", &x);

	printf("\nThe %.3lf's round value is %.3lf\n", x, myround(x));

	return 0;
}


