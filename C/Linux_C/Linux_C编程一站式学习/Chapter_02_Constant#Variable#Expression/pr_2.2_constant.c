/*
 * 2015-04-24
 */
#include<stdio.h>

int main(void) {
	printf("Character: %c \nInteger: %d\nFloating point: %f\n", '}', 34, 3.14);
	printf("\n\n");

	printf("\\n: %c,abcd\n", '\n');

	printf("%c%c",'\n', '\n');

	//show " and ? can use \"(\?) or '"'('?')
	printf("Double Quote: %c, %c\n", '"', '\"');
	printf("Question Mark: %c, %c\n", '?', '\?');

	printf("\n\n");
	//show ' and \ just use \' and '\\'
	//printf("Single Quote: %c\n", ''');
	//printf("Single Quote: %c\n", "'");
	printf("Single Quote: %c\n", '\'');
	printf("Backslash: %c\n", '\\');


	/*
	 * 在C语言中整数除法取的既不是Floor也不是Ceiling
	 * 无论操作数是正是负总是把小数部分截掉，
	 * 在数轴上向零的方向取整（Truncate toward Zero），
	 * 或者说当操作数为正的时候相当于Floor，当操作符为负的时候相当于Ceiling
	 * 
	 * C99规定，如果a和b是整型，b不等于0，则表达式 '(a / b) * b + a % b' 的值总是等于a
	 * 结合C的整数除法运算要Truncate Toward Zero，可以得到一个结论：
	 * % 运算符的结果总是与被除数同号
	 */
	printf("\n(16 / -3) = %d, (16 %% -3) = %d\n", (16/-3), (16%-3));
	printf("(-16 / 3) = %d, (-16 %% 3) = %d\n", -16/3, -16%3);

	printf("(17 / 3) = %d, (17 %% 3) = %d\n", 17/3, 17%3);
	printf("(-17 / -3) = %d, (-16-7 %% -3) = %d\n", -17/-3, -17%-3);
	
	return 0;
}
