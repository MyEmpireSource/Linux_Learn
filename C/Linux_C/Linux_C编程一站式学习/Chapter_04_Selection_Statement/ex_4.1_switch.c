/*
 * use switch
 *
 * 2015-05-06 15:30
 */

#include<stdio.h>

/*
 * the programming of switch
 * switch(controlling expression) {
 *     case constat expression : 
 *	       语句列表
 *	       [break;]
 *     case constat expression : 
 *	       语句列表
 *	       [break;]
 *	   ... ...
 *	   default :
 *		   语句列表
 *		   [break;]
 * }
 */
void print_day(int day) {

	switch (day) {
		case 1 : 
			printf("Monday");
			break;
		case 2 : 
			printf("Tuesday");
			break;
		case 3 : 
			printf("Wednesday");
			break;
		case 4 : 
			printf("Thursday");
			break;
		case 5 : 
			printf("Friday");
			break;
		case 6 : 
			printf("Saturday");
			break;
		case 7 : 
			printf("Sunday");
			break;
		default : 
			printf("Illegal day number!");
			break;
	}
	printf("\n");
}

/*
 * 进入case后如果没有遇到break语句就会一直往下执行，
 * 后面其它case或default分支的语句也会被执行到，直到遇到break，
 * 或者执行到整个switch语句块的末尾
 */
void print_work_day(day) {
	switch (day) {
		case 1 : 
		case 2 : 
		case 3 : 
		case 4 : 
		case 5 : 
			printf("It is Weekday! T_T");
			break;
		case 6 : 
		case 7 : 
			printf("It is Weekend! ^_^");
			break;
		default : 
			printf("Illegal day number!");
			break;
	}
	printf("\n");
}

int main(void) {
	int day;
	
	printf("Please input a day number(1~7): ");
	scanf("%d", &day);

	print_day(day);
	print_work_day(day);
	return 0;
}
