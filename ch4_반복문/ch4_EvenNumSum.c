#include <stdio.h>

int main(void)
{
	int i, n, sum;		
	printf("정수를 입력하시오 : ");		
	scanf_s("%d", &n);					

	i = 0;						
	sum = 0;				

	while (i <= n){
		sum += i;				
		i = i + 2;				
	}
	printf("1부터 %d까지의 짝수합은 %d 입니다.\n", n, sum);		
	return 0;
}
