#include <stdio.h>
void swap(int x, int y);				

int main(void)
{
	int a = 100, b = 200;				

	printf("a = %d\tb = %d\n", a, b);	
	swap(a, b);							// swap 함수에 a와 b의 값을 넣어 실행
	printf("a = %d\tb = %d\n", a, b);	
	// 주소값이 바뀌지 않았기 때문에 a와 b의 값은 swap함수에 실행해도 값이 같음

	return 0;
}
void swap(int x, int y)
{
	int tmp;							
	printf("x = %d\ty = %d\n", x, y);	

	tmp = x;							// 변수 tmp에 x의 값을 저장
	x = y;								// x에 y의 값을 저장
	y = tmp;							// y에 tmp의 값을 저장
	// 수를 보존하면서 위치를 바꾸는 알고리즘

	printf("x = %d\ty = %d\n", x, y);	
}
