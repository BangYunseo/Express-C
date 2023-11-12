#include <stdio.h>
void swap(int *px, int *py);				

int main(void)
{
	int a = 100, b = 200;				

	printf("a = %d\tb = %d\n", a, b);	
	swap(&a, &b);						// swap 함수에 a와 b의 주소값을 넣어 실행
	printf("a = %d\tb = %d\n", a, b);	
	// 주소값이 바뀌었기 때문에 a와 b의 값은 swap함수에 실행하면 값이 변함

	return 0;
}
void swap(int *px, int *py)
{
	int tmp;							

	tmp = *px;							// 변수 tmp에 포인터 px의 값을 저장
	*px = *py;							// 포인터 px에 포인터 py의 값을 저장
	*py = tmp;							// 포인터 py에 tmp의 값을 저장
	// 수를 보존하면서 위치를 바꾸는 알고리즘
}
