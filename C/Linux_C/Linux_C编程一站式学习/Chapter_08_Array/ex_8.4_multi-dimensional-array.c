/**
 * 多维数组
 *
 * show week day
 *
 * 2015-07-01 16:05
 */

#include<stdio.h>

void print_day(int day) {

	char week_days[8][10] = {
		"",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};

	if (day < 1 || day > 7) {
		printf("Error!! Illegal day number!\n");
		return;
	} 
	printf("%s\n", week_days[day]);
}

int main(void) {
	
	int day;
	printf("Please input a integer between 1 ~ 7: ");
	scanf("%d", &day);

	print_day(day);

	return 0;
}






