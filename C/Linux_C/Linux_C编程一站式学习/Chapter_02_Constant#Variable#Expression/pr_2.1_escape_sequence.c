/*
 * Show some Escape Sequence
 * 2015-04-22 17:00
 */
#include<stdio.h>

int main(void) {
	printf("show \\b:\n");
	printf("Will execute 'printf(\"a\\bbcdef\\b\\bgh\")'\n");
	printf("a\bbcdef\b\bgh");
	printf("\n\n");

	printf("show \\r:\n");
	printf("Will execute 'printf(\"abcdefgh\\r123\")'\n");
	printf("abcdefgh\r123\n");
	printf("\n\n");

	return 0;
}
