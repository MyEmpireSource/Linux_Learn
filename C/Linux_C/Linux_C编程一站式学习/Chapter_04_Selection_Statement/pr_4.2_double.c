/*
 * 浮点型的精度有限，不适合用==运算符做精确比较
 * 2015-05-05 15:20
 */

#include<stdio.h>

int main(void) {
	double i = 22.0;
	double j = i / 7.0;

	for (i = 1.0; i <= 100.0; i++) {
		j = i / 7.0;
		printf("%f, %f ", i, j);
		if (j * 7.0 == i ) {
			printf("Equal.\n");
		} else {
			printf("Unequal.\n");
		}
	}
	
	return 0;
}
