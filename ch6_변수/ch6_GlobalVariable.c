#include <stdio.h>

int A;		// 전역변수 A 생성
int B;		// 전역변수 B 생성
int add();	// 함수 add()의 원형 출력

int main(void){
	int answer;		
	A = 5;			
	B = 7;			

	answer = add();	// 변수 answer에 add()함수의 값을 저장

	printf("%d + %d = %d\n", A, B, answer);	
	return 0;
}
int add(){
	return A + B;		// A 와 B의 합을 반환
}
