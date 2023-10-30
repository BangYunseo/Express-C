#include <stdio.h>

int main(void)
{
	int score, iscore;		
	char grade;				

	printf("점수를 입력하세요 : ");		
	scanf("%d", &score);				

	iscore = score / 10;						

	switch (iscore)
	{
	case 10:
	case 9:grade = 'A'; break;				// 계산된 점수가 9, 10일 경우 학점은 A (90 ~ 100 은 A학점)
	case 8: grade = 'B'; break;				// 계산된 점수가 8일 경우 학점은 B (80 ~ 89 은 B학점)
	case 7: grade = 'C'; break;				// 계산된 점수가 7일 경우 학점은 C (70 ~ 79 은 C학점)
	case 6: grade = 'D'; break;				// 계산된 점수가 6일 경우 학점은 D (60 ~ 69 은 D학점)
	default: grade = 'F'; break;				// 계산된 점수가 6 아래일 경우 학점은 F (59점 이하는 F학점)
	}
	printf("You're grade is %c.\n", grade);		
	return 0;
}
