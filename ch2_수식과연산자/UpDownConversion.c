// 올림 변환과 내림 변환
#include <stdio.h>

int main(void)
{
	char c;			// 변수 c를 생성
	int i;			// 변수 i를 생성
	double f;   		// 변수 d를 생성

	c = 10000;		// 내림 변환 (char형은 1byte이기 때문에 상위 3byte는 없어진다. 즉, 일부 값이 잘린다.)
	i = 1.23456 + 10;	// 내림 변환한다. (정수형 변수이기 때문에 소수점 이하가 사라진다.)
	f = 10 + 20;		// 올림 변환한다. (정수가 실수가 된다.)
	printf("c = %d, i = %d, f = %f\n", c, i, f);	
	return 0;
}
