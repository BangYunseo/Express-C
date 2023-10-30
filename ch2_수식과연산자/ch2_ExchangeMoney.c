#include <stdio.h>

int main(void)
{
	int Money, Price;							
	int Change, C5000, C1000, C500, C100;					
	printf("물건 값을 입력하시오 : ");			
	scanf_s("%d", &Money);						

	printf("사용자가 낸 돈을 입력하시오 : ");				// 사용자가 낸 돈을 입력받는다.
	scanf_s("%d", &Price);						// 입력받은 사용자가 낸 돈을 변수 Price에 저장한다.

	Change = Price - Money;						// 사용자가 낸 돈에서 물건 값을 뺀 수를 Change에 저장한다.

	C5000 = Change / 5000;						// Change를 5000으로 나눈 값을 C5000에 저장한다.
	printf("5000원권 : %d 장\n", C5000);				// 거슬러줘야 하는 5000원권의 수를 출력한다.

	Change = Change % 5000;						// 거스름돈을 저장할 변수에 5000원을 뺀 나머지 값을 저장한다.

	C1000 = Change / 1000;						// Change를 1000으로 나눈 값을 C1000에 저장한다.
	printf("1000원권 : %d 장\n", C1000);				// 거슬러줘야 하는 1000원권의 수를 출력한다.

	Change = Change % 1000;						// 거스름돈을 저장할 변수에 1000원을 뺀 나머지 값을 저장한다.

	C500 = Change / 500;						// Change를 500으로 나눈 값을 C500에 저장한다.
	printf("500원권 : %d 개\n", C500);				// 거슬러줘야 하는 500원권의 수를 출력한다.

	Change = Change % 500;						// 거스름돈을 저장할 변수에 500원을 뺀 나머지 값을 저장한다.

	C100 = Change / 100;						// Change를 100으로 나눈 값을 C100에 저장한다.
	printf("100원권 : %d 개\n", C100);				// 거슬러줘야 하는 100원권의 수를 출력한다.

	return 0;
}
