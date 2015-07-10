#include <stdio.h>

void diamond(int num, char cha){
	int i;
	int j;
	int allSize; //每行总的打印个数
	int spaceSize; //每行开始打印的空格数

	if (num % 2 == 0) {
		printf("Error, must a odd integer!\n");
		return;
	}

	for (i = 1; i <= 2*num - 1; i = i + 2) {
		if (i <= num) {
			allSize = (i + num)/2;
			spaceSize = (num - i)/2;
		} else {
			//超过了num,数目递减
			--allSize;
			//超过了num,空格数递增
			++spaceSize;
		}
		
		//(i + num)/2 打印个数
		//(num - i)/2 空格个数
		for (j = 1; j <= allSize; j++) {
			if (j > spaceSize) {
				//打印字符,超过空格数的用字符替代
				printf("%c\t", cha);
			} else {
				//打印空格
				printf(" \t");
			}	
		}
		printf("\n\n\n\n");
	}	
}

void diamond_1(int num, char ch) {
	int i;
	int j;
	int allSize;
	int signSize;
	int mid;

	if (num % 2 == 0) {
		printf("Error, must a odd integer!\n");
		return;
	}

	mid = num / 2 + 1;
	allSize = mid;
	signSize = 1;

	for (i = 1; i <= num; ++i) {
		
		for (j = 1; j <= allSize; ++j) {
			if (j <= allSize - signSize) {
				printf(" \t");
			} else {
				printf("%c\t", ch);
			}
		}
		
		if (i >= mid) {
			--allSize;
			signSize = signSize - 2;
		} else {
			++allSize;
			signSize = signSize + 2;
		}


		printf("\n\n\n\n");
	}
}

void diamond_2(int num, int cha) {
	int i;
	int j;
	int allSize;
	int spaceSize;

	if (num % 2 == 0) {
		printf("Error, must a odd integer!\n");
		return;
	}
	
	int mid = num / 2 + 1;
	allSize = mid;
	spaceSize = mid - 1;

	i = 1;
	do {
		for (j = 1; j <= allSize; ++j) {
			if (j > spaceSize) {
				printf("%c\t", cha);
			} else {
				printf(" \t");
			}
		}
		if (i >= mid) {
			--allSize;
			++spaceSize;
		} else {
			++allSize;
			--spaceSize;
		}
		++i;
		printf("\n\n\n\n");
	} while (i <= num);
}

int main(void){
		
	int i;
	char cha;
	printf("Please input an odd integer and a char:\n");
	scanf("%d %c", &i, &cha);
	printf("\n");	
	diamond(i, cha);
	
	printf("\n\n");
	diamond_1(i, cha);

	printf("\n\n");
	diamond_2(i, cha);

	return 0;
}
