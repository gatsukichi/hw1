#include<stdio.h>

int input();

int main()
{
	int number;
	number = input();
	printf("입력된 값은 8 진수로 %#o 입니다", number);
	printf("입력된 값은 16 진수로 %#x 입니다", number);

	return 0;

}

int input()
{
	int number;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &number);
	printf("\n");

	return number;

}