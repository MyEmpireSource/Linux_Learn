/*
 * the function printf()'s return value is the number of print
 *
 * 2015-04-28 11:40
 */

#include<stdio.h>

int main(void) {
	int i;
	
	i = printf("abcdefghijklmnopqrstuvwxyz\n");

	printf("The printing number is : %d\n", i);

	return 0;
}
