#include <stdio.h>

int main(void)
{
	int x, y;			
	for (y = 1; y <= 5; y++)		
	{
		for (x = 0; x < y; x++)			// x의 값을 0으로 초기화하고, x가 y보다 작을 때마다 x를 1씩 더함
							// 여기서 x를 0으로 초기화하는 이유는 y의 값이 1이기 때문에 
							// x를 1로 초기화해버리면 결과적으로 생성될 별이 하나씩 적게 출력됨
			printf("*");		
		printf("\n");          			// 반복문이 종료되면 줄바꿈
	} 
	return 0;
}
