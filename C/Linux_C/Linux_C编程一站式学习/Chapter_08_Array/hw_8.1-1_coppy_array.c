/**
 * copy the array data to another array;
 *
 * 2015-05-29 11:40
 */

#include<stdio.h>

int main(void) {
	int a[5] = {8, 7, 5, 6, 4};
	int b[5];

	int i = 5;
	
	for (i = 0; i < 5; ++i) {
		b[i] = a[i];
	}


	printf("The a[5] = {");
	for (i = 0; i < 5; ++i) {
		if (i == 4) {
			printf("%d}\n", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}


	printf("The b[5] = {");
	for (i = 0; i < 5; ++i) {
		if (i == 4) {
			printf("%d}\n", b[i]);
		} else {
			printf("%d, ", b[i]);
		}
	}
	
	return 0;
}

