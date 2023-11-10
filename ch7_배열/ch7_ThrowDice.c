#include <stdio.h>
#include <stdlib.h>
#define DICE_NUM 6		

int main(void){
	int freq[DICE_NUM] = { 0 };	
	int i;						

	for (i = 0; i < 10000; i++){
		++freq[rand() % 6];		
	}

	printf("=========================\n");
	printf("숫자\t빈도\n");						
	printf("=========================\n");

	for (i = 0; i < DICE_NUM; i++)		
	{
		printf("%d\t%d\n", i + 1, freq[i]);
		// 주사위 면 1의 값이 나온 횟수부터 차례대로 입력
		// 여기서 i는 0부터 시작하므로 i + 1을 해서 1 ~ 6까지의 수를 입력
	}
	return 0;
}
