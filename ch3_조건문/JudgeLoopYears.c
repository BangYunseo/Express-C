#include <stdio.h>

int main(void)
{
	int year;		

	printf("Input year : ");		
	scanf_s("%d", &year);				

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		printf("%d년은 윤년입니다.\n", year);
	// if절의 조건을 충족하는 값이 입력됐다면, 윤년이라고 출력
		
	else
		printf("%d년은 윤년이 아닙니다.\n", year);
	// if절의 조건을 충족하는 값이 아니라면, 윤년이 아니라고 출력
	return 0;
}
