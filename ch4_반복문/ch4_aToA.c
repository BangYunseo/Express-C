#include <stdio.h>

int main(void) 
{
	char letter;		
	while (1)			
	{
		printf("소문자를 입력하시오 : ");			
		scanf_s(" %c", &letter, 16);						

		if (letter == 'Q')				// 입력받은 문자가 Q일 경우
			break;					// while문 종료
		if (letter < 'a' || letter > 'z')		// 만약 입력받은 문자가 소문자 a보다 작고 z보다 클 경우
			continue;				// while문을 계속 진행

		letter -= 32;							
		printf("변환된 대문자는 %c입니다.\n", letter);		
	}
	return 0;
}
