#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10		

int main(void)
{
	srand((unsigned)time(NULL));	// 난수를 발생

	int prices[SIZE] = { 0 };	
	int i, minimum;		

	printf("---------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");				
	printf("---------------------------\n");

	for (i = 0; i < SIZE; i++){
		prices[i] = (rand() % 100) + 1;			// 배열의 각 값에 1 ~ 100까지의 수를 저장
		printf("%d ", prices[i]);			
	}
	printf("\n");		
	minimum = prices[0];			// 일단 최솟값을 첫 번째 값으로 설정한다. for문 안에 들어갈 필요 X
	for (i = 0; i < SIZE; i++)		// 배열의 크기만큼 반복
	{
		if (prices[i] < minimum)	// 만약 prices[i]의 값이 현재 최솟값보다 작다면
			minimum = prices[i];	// 현재 최솟값을 prices[i]로 변경
	}
	printf("최소값은 %d 입니다.\n", minimum);	
	return 0;
}
