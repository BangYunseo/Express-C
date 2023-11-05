#include <stdio.h>

void menu();			
int save(int amount);	

int main(void){
	menu();	
	save(10000);	
	save(50000);
	save(-10000);	
	save(30000);	
	printf("==================================\n");
	return 0;
}
void menu(){
	printf("==================================\n");
	printf("입금\t출금\t잔고\t\n");
	printf("==================================\n");
}
int save(int amount){
	static long balance = 0;
	// 정적 변수 balance를 생성, 정적 변수는 save()함수가 끝나더라도 값이 저장된다.
	// 즉, 정적 변수 balance는 잔고를 저장하는 변수

	if (amount > 0)	// 만약 amount가 양수라면 (입금)
	{
		printf("%d \t \t", amount);	// 입금 칸에 출력
	}
	else	// 만약 amount가 음수라면 (출금)
	{
		printf("\t%d \t", -amount);
		// 출금 칸에 출력하고, 출금하는 값은 음수이므로 -를 붙임
	}

	balance += amount;	
	printf("%d \n", balance);	
}
