/*
 * show a integer's every number
 * if a integer is 23456, show 2,3,4,5,6
 *
 * 2015-05-05 16:40
 */

#include<stdio.h>
#include<math.h>

/*
 * call pow(x,y) get the max divisor of 10^n
 * if num is 756, return 100
 * if num is 4526, return 1000
 *
 */
int get_max_divisor(int num) {
	int n = 2;
	int divisor = 10;

	if (num < divisor) {
		return 1;
	}

	for (; divisor <= num; n++) {
		divisor = pow(10, n);
	}
	
	return divisor / 10;
}
/*
 * show a integer's every number
 * if a integer is 23456, show 2,3,4,5,6
 */
void show_integer_number(int number) {
	int divisor; //除数
	int quotient; //商

	printf("The %d's number is : ", number);

	if (number < 0) {
		number = -number;
	}

	divisor = get_max_divisor(number);

	if (divisor != 1) {
		for (; divisor >= 10; divisor = divisor / 10) {
			quotient = number / divisor;
			number = number % divisor;
			printf("%d, ", quotient);
		}
	}
	//此处number有两种值
	//一是大于十的值的余数(divisor != 1, number = number % divisor )
	//而是小于十的数 (divisor == 1)
	printf("%d\n", number);
}

int main(void) {
	int number;
	printf("Please input a integer:\n");
	scanf("%d", &number);

	show_integer_number(number);

	return 0;
}
