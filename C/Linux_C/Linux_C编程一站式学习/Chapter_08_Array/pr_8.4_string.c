/**
 * String example
 *
 * 2015-07-01 15:50
 */

#include<stdio.h>

int main(void) {

	char c = "abceef"[1];
	printf("%c, %c", c, "ab\n"[2]); 

	char str[14] = "Hello, world.\n";

	printf("String : %s", str);

	return 0;
}
