#include <stdio.h>

int get_num(void);					
int prime_num(int n);				


int main(void)
{
	int n;							
	n = get_num();					

	if (prime_num(n) == 1)				// 만약, prime_num(n)의 값이 1이라면
		printf("%d은(는) 소수입니다.\n", n);	// n은 소수
	else						// prime_num(n)의 값이 0이라면
		printf("%d은(는) 소수가 아닙니다.\n", n);	// n은 소수가 아님

	return 0;
}
int get_num(void){
	int n;							
	printf("정수를 입력하세요 : ");	
	scanf_s("%d", &n);			
	return n;	// 입력받은 정수 반환
}
int prime_num(int n)				{
	int i;							
	for (i = 2; i < n; i++)		// i를 2로 초기화하고, i가 n보다 작을 때까지 i의 값을 1씩 더하면서 for문을 반복
		if (n % i == 0)		// 만약 n을 i로 나눈 나머지가 0이라면,
			return 0;	// 0을 반환(소수가 아닐 때)

	/* i에 2를 초기화한 이유 : 0을 초기화하면 나누면 0의 값이 나오고, 
	1로 초기화를 하면 n % 1은 무조건 나머지가 0이기 때문, 
	2는 소수이기 때문에 2로 나눠야 나머지가 0이 되는지, 1이 되는지, 그 이상이 되는지 확인가능

	ex) 만약 n에 3이 입력됐다고 했을 때, i는 2이기 때문에 둘을 나누면 나머지는 1임
	여기서 for문 반복을 위해 i에 1을 더하면, i = n = 3 이 되기 때문에 for 반복문을 빠져나옴
	그래서 결국 1을 반환하게 되고, 3은 소수라는 것을 알 수 있게됨.*/
	return 1;						// 1을 반환(소수일 때)
}
