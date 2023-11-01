#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	srand(time(NULL));
	int x, y, answer, i;		
	

	for (i = 0; i < 10; i++)			// 변수 i를 10까지 1씩 더해가면서 10개의 수학문제를 낸다.
	{
		x = rand() % 10;			// 변수 x에 1~10의 숫자 중 무작위 난수 저장
		y = rand() % 10;			// 변수 y에 1~10의 숫자 중 무작위 난수 저장
		printf("%d + %d = ", x, y);		
		scanf_s("%d", &answer);			
		if (x + y == answer)			
			printf("맞았습니다.\n");		// 정답이 일치할 때 
		else
			printf("틀렸습니다.\n");		// 정답이 일치하지 않을 때 
	}
	return 0;
}
