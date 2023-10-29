#include <stdio.h>

int main(void){
	int num1, num2, result;		
	char op;			

	printf("수식을 입력하시오.\n");
	printf("(예 : 2 + 5)\n");
	printf(">> ");

	scanf("%d %c %d", &num1, &op, 30, &num2);

	if (op == '+')
		result = num1 + num2;		// num1과 num2의 합을 변수 result에 저장한다.
	else if (op == '-')
		result = num1 - num2;		// num1과 num2의 차을 변수 result에 저장한다.
	else if (op == '*')
		result = num1 * num2;		// num1과 num2의 곱을 변수 result에 저장한다.
	else if (op == '/')
		result = num1 / num2;		// num1과 num2의 몫을 변수 result에 저장한다.
	else if (op == '%')
		result = num1 % num2;		// num1과 num2의 나머지를 변수 result에 저장한다.
	else
		printf("지원되지 않는 연산자입니다.");
	printf("%d %c %d = %d", num1, op, num2, result);
	return 0;
}
