// 윤년 계산기
#include <stdio.h>

int main(void)
{
	int year, result;	

	printf("연도를 입력하세요 : ");	
	scanf_s("%d", &year);			

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);	
	// 윤년을 계산한 결과를 변수 result에 저장한다.
	
	printf("result = %d\n", result);	
	// 입력받은 년도가 윤년인지 아닌지 계산한 값을 출력한다.

	return 0;
}
