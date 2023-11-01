#include <stdio.h>

int main(void)
{
	int x, y;		
	int r;		

	printf("두 개의 정수를 입력하시오 (큰 수, 작은 수) : ");
	scanf_s("%d %d", &x, &y);
	
	while (y != 0)		// y가 0이라면 공약수는 x와 일치
	{
		r = x % y;		// x를 y로 나눈 나머지를 변수 r에 저장
		x = y;			// x에 y의 값을 저장
		y = r;			// y의 값을 r에 저장
		
		/* 예시) x에 12, y에 8을 저장했을 경우를 가정한다.
		1번 반복]
		r = 12 % 8 = 4
		y는 8이므로 x에 8을 저장
		r은 4이므로 y에 4를 저장
		2번 반복]
		r = 8 % 4 = 0
		y는 4이므로 x에 4를 저장
		r은 0이므로 y에 0을 저장
		3번 반복하려고 할 때, y가 0이기 때문에 while문을 빠져나옴
		*/
	}
	printf("최대 공약수는 %d 입니다.", x);
	return 0;
}
