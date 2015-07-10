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
void show_integer_number(int number, int check_number) {
	int divisor; //除数
	int quotient; //商
	int mid_number;
	int count;

	if (number < 0) {
		number = -number;
	}
	mid_number = number;

	printf("The 0 ~ %d have %d's ", number, check_number);

	count = 0;
	for (; mid_number >=0; mid_number--) {
//		printf("The %d's number is : ", mid_number);
		number = mid_number;
		divisor = get_max_divisor(number);

		if (divisor != 1) {
			for (; divisor >= 10; divisor = divisor / 10) {
				quotient = number / divisor;
				number = number % divisor;
//				printf("%d, ", quotient);
				if (check_number == quotient) {
					count++;
				}
			}
		} 

		if (check_number == number) {
			count++;
		}

	}
printf("count is %d\n", count);
}

int main(void) {
	int number;
	int check_number;
	printf("Please input two integer, the sec number is 0 ~ 9: ");
	scanf("%d %d", &number, &check_number);

	show_integer_number(number, check_number);

	return 0;
}
