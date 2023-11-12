#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	printf("&a[0] = %u\n", &a[0]);		
	printf("&a[1] = %u\n", &a[1]);		
	printf("&a[2] = %u\n", &a[2]);		
	printf("a = %u\n", a);		
	// 배열 a 전체의 주소값은 a[0]의 주소값과 같음
}
