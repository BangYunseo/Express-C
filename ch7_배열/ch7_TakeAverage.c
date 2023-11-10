#include <stdio.h>
#define STUDENTS 5				// 학생 수를 5로 정의
int get_average(int scores[], int n);		

int main(void){
	int scores[STUDENTS] = { 1, 2, 3, 4, 5 };		// 배열을 학생의 수만큼 생성하고 1, 2, 3, 4, 5로 초기화
	int avg;	

	avg = get_average(scores, STUDENTS);		// 변수 avg에 get_average 함수의 값을 저장
	printf("평균은 %d 입니다.\n", avg);		
	return 0;
}
int get_average(int scores[], int n)
{
	int i;		
	int sum = 0;	

	for (i = 0; i < n; i++)		
		sum += scores[i];	// 합계를 저장하는 변수 sum에 scores배열의 [i] 순서대로 더함
	return sum / n;			// 합계를 변수 n으로 나눈 수를 반환
}
