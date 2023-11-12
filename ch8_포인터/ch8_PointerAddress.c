#include <stdio.h>

int main(void)
{
	int i = 10;					
	int *p;						

	p = &i;						
	printf("i = %d\n", i);		

	*p = 20;				
	printf("i = %d\n", i);
	
	// 포인터 p에 20 저장 == p가 가리키는 위치에 20을 대입
	// p는 i의 주소값
	// p의 주소값 == i의 주소값의 주소값 == i의 값
	// 따라서 i는 20

	return 0;	
}
