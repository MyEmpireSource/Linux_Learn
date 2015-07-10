/*
 * show boolean return
 *
 * 2015-05-06 16:20
 */

#include<stdio.h>

int is_even(int x) {
	return !(x % 2);
}

int main(void) {
	int x;
	int even_flag;
	printf("Please input a integer: ");
	scanf("%d", &x);

	even_flag = is_even(x);
	
	printf("The boolean return is %d, ", even_flag);
	if (even_flag) {
		printf("%d is even!\n", x);
	} else {
		printf("%d is odd\n", x);
	}

	printf("boolean !%d = %d\n", x, !x);

	return 0;
}

