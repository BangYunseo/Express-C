#include <stdio.h>

int com_num(int n, int m);					
int fact_num(int n);						
int get_num(void);							


int main(void){
	int a, b;								
	a = get_num();							
	b = get_num();							
		
	printf("C(%d, %d) = %d \n", a, b, com_num(a, b));	// 조합의 형태로 출력한다.
	return 0;
}
int get_num(void){
	int n;							
	printf("정수를 입력하세요 : ");		
	scanf_s("%d", &n);					
	return n;						
}
int fact_num(int n)						{
	int i;							
	long result = 1;			// 팩토리얼은 곱셈이기 때문에 값을 저장할 변수 result를 1로 초기화

	for (i = 1; i <= n; i++)		// i가 n보다 작거나 같을 때, i의 값을 1씩 더하면서 for문 반복
		result = result * i;		// result에 i값 곱하면서 저장
	return result;				// result를 반환
}
int com_num(int n, int m){
	return (fact_num(n) / (fact_num(m) * fact_num(n - m)));		// 변수 n과 m의 조합을 반환
}
