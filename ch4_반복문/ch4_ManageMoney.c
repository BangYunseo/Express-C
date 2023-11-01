#include <stdio.h>
#define SEED_MONEY 1000000

int main(void)
{
	int year = 0;				
	int money = SEED_MONEY		

	while (1){
		year++;				
		money += money * 0.30;		
		if (money > 10 * SEED_MONEY)		// money가 처음에 가지고있던 시드머니의 10배가 되면 반복문 종료
			break;				
	}
	printf("%d", year);						
	return 0;
}
