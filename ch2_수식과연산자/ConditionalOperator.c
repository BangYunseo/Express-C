// 조건 연산자 ? 사용해보기
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("첫 번째 수를 입력하시오 : ");	
	scanf_s("%d", &num1);					
	printf("두 번째 수를 입력하시오 : ");	
	scanf_s("%d", &num2);					

	printf("큰 수 = %d\n", (num1 > num2) ? num1 : num2);
	// 큰 수를 입력한다. num1이 큰 수가 맞다면 num1을, num2가 큰 수라면 num2를 출력한다.
	
	printf("작은 수 = %d\n", (num1 < num2) ? num1 : num2);
	// 작은 수를 입력한다. num1이 작은 수가 맞다면 num1을, num2가 작은 수라면 num2를 출력한다.

	return 0;
}
