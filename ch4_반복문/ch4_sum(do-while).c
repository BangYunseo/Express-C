#include <stdio.h>

int main(void)
{
	int number, sum = 0;		
	
	do {
		printf("정수를 입력하시오 : ");		
		scanf_s("%d", &number);				
		sum += number;						
	} while (number != 0);			
	printf("숫자들의 합 : %d", sum);		
	return 0;
}
