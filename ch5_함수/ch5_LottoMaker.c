#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;								
	srand((unsigned)time(NULL));			// 난수 발생기 (시드설정)
	
	for (n = 0; n < 6; n++)				// n을 0으로 초기화하고, 6이 되기 전까지 n의 값을 1씩 더하면서 for문을 반복
		printf("%d ", 1 + rand() % 45);		// 1부터 45까지의 숫자를 난수로 설정하고, 6개의 값을 출력
	
	return 0;
}
