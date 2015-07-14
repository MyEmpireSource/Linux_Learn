/**
 * Segmentation fault dubug
 * 段错误调试
 *
 * 2015-07-14 10:25
 */

#include<stdio.h>

int main(void)
{
	int sum = 0;
	int i = 0;
	char input[5];

	scanf("%s", input);
	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] < '0' || input[i] > '9') {
			printf("Invalid input!\n");
			sum = -1;
			break;
		}

		sum = sum * 10 + input[i] - '0';
	}
	printf("input = %d\n", sum);

	return 0;
}

