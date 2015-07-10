/*
 * Show % use escape sequence
 * 2015-04-24
 */
#include<stdio.h>

int main(void) {
	printf("Show %% Character\n");
	printf("Will execute printf(\"%%%%\\n\")\n");
	printf("%%\n");
	printf("\n");
	printf("Will execute printf(\"%cc\\n\", %c%c%c)\n", '%', '\'', '%', '\'');
	printf("%c\n", '%');
	
	return 0;
}
