#include <stdio.h>

int main(void){
	int month, days;		

	printf("달을 입력하세요 (1 ~ 12): ");	
	scanf_s("%d", &month);			

	/* 2월은 28일, 1, 3, 5, 7, 8, 10, 12월은 31일, 4, 6, 9, 11월은 30일
	이에 따라서 switch문을 이용한다. */

	switch (month)
	{
	case 2: days = 28; break;		// 2월일 경우 변수 days에 28일 저장
	case 4:
	case 6:
	case 9:
	case 11: days = 30; break;		// 4, 6, 9, 11월일 경우 변수 days에 30일 저장
	default: days = 31; break;		// 나머지 월일 경우 변수 days에 31일 저장
	}
	printf("%d월의 일 수는 %d입니다.\n", month, days);		
	return 0;
}
