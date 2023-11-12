#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;			
	int *p;					

	p = &x;						
	printf("p = %d\n", p);		
	printf("*p = %d\n", *p);	
	// x의 주소값의 주소값은 x 원래의 값이다. = 10

	p = &y;					
	printf("p = %d\n", p);		
	printf("*p = %d\n", *p);	
	// y의 주소값의 주소값은 y 원래의 값이다. = 20

	return 0;
}
