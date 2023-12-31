#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	
	printf("a = %u\n", a);					
	// a의 값을 출력
	// 배열인 a의 값은 a[0]의 주소값을 가리키기 때문에, a[0]의 주소값을 출력
	
	printf("a + 1 = %u\n", a + 1);
	// a+1의 값을 출력
	// 앞의 a와 마찬가지로, a+1 또한 배열 a[1]의 주소값을 출력
	
	printf("*a = %d\n", *a);
	// a는 a[0]의 주소값을 출력했으므로 반대로 포인터 a는 a의 값을 출력 
	// a는 a[0]의 값을 담고 있으므로 a[0]의 값인 10을 출력
	
	printf("*(a + 1) = %d\n", *(a + 1));
	// 위와 마찬가지로, a+1은 배열 a[1]의 값 자체를 출력 
	// 20을 출력

	return 0;
}
