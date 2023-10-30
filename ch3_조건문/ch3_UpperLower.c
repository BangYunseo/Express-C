#include <stdio.h>

int main(void)
{
	char lecture;		

	printf("input lecture : ");		
	lecture = getchar();				
	// getchar()함수를 이용

	// 아스키코드를 참고
	if ((lecture >= 'A') && (lecture <= 'Z'))
		printf("%c는 대문자입니다.\n", lecture);			// A~Z의 문자를 입력받으면 대문자
	else if ((lecture >= 'a') && (lecture <= 'z'))
		printf("%c는 소문자입니다.\n", lecture);			// a~z의 문자를 입력받으면 소문자
	else if ((lecture >= '0') && (lecture <= '9'))
		printf("%c는 숫자입니다.\n", lecture);			// 0~9의 숫자를 입력받으면 숫자
	else
		printf("%c는 기타문자입니다.\n", lecture);	
									// 앞의 어느 내용에도 해당되지 않으면 기타문자
	return 0;
}
