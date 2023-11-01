// lab3 : 숫자 추측 게임(46p)
#include <stdio.h>

int main(void)	
{
	int answer = 59;		
	int guess;				
	int tryy = 0;			

	do{	
		printf("정답을 추측하시오 : ");		
		scanf_s("%d", &guess);				
		tryy++;										
		
		if (guess < answer)		// 추측한 숫자가 정답보다 작다면 LOW 출력
			printf("LOW\n");
		if (guess > answer)		// 추측한 숫자가 정답보다 크다면 HIGH 출력
			printf("HIGH\n");
	} while (guess != answer);		// 추측한 숫자가 정답과 일치하면 반복종료
	printf(" 축하합니다. 시도횟수 = %d", tryy);	
	return 0;
}
