#include <stdio.h>

int main(void)
{
	int num1, num2, result;		
	char op;					

	printf("수식을 입력하세요.\n");
	printf("(예 : 2 + 5)\n");
	printf(">>");				

	scanf_s("%d %c %d", &num1, &op, 50, &num2);		

	switch (op){
	case '+': result = num1 + num2;	break;		
	case '-': result = num1 - num2;	break;
	case '/': result = num1 / num2;	break;
	case '*': result = num1 * num2;	break;
	case '%': result = num1 % num2;	break;
	default: printf("지원하지 않는 연산자입니다."); break;
	}
	printf("%d %c %d = %d", num1, op, num2, result);
	return 0;
}
