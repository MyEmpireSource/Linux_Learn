/**
 * breakpoint debug
 * 断点调试
 *
 * 2015-07-13 11:25
 */

#include<stdio.h>

int main(void)
{
	int sum = 0;
	int i = 0;
	char input[5];

	//printf("%d, %d\n", '0', '\0');

	while (1) {
		sum = 0;
		//scanf weill add '\0' at the end of string
		scanf("%s", input);
		for (i = 0; input[i] != '\0'; i++) {
			if (input[i] < '0' || input[i] > '9') {
				printf("Invalid input!\n");
				sum = -1;
				break;
			}

			//get the number from string by ASCII
			//in ASCII, '0'=48, '1'=49
			sum = sum * 10 + input[i] - '0';
		}

		printf("input=%d\n", sum);
	}

	return 0;
}


