#include <stdio.h>

struct student{
	int number;		
	char name[10];		
	double grade;		
};
int main(void){
	struct student s;
	// 구조체 student를 변수 s로 선언

	s.number = 20240001;		
	strcpy(s.name, "홍길동");	
	// 문자열 배열은 문자열 변수와 다르게 strcpy() 함수를 이용하여 문자열로 변경
	s.grade = 4.3;				

	printf("학번 : %d\n", s.number);		
	printf("이름 : %s\n", s.name);			
	printf("학점 : %f\n", s.grade);			

	return 0;
}

// 출력 예시
// 학번 : 20240001
// 이름 : 홍길동
// 학점 : 4.300000
