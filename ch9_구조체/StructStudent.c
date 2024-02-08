#include <stdio.h>

struct student{
	int number;		// 정수형 변수이자 학번을 저장할 변수 number를 생성
	char name[10];		// 문자형 배열이자 이름을 저장할 배열 name[10]을 생성
	double grade;		// 실수형 변수이자 학점을 저장할 변수 grade를 생성
};
int main(void){
	struct student s;
	// 구조체 student를 변수 s로 선언

	s.number = 20190001;		// 구조체 안의 변수 number의 값을 2019000로 초기화
	strcpy(s.name, "홍길동");	// 구조체 안의 배열 name[10]의 값을 홍길동으로 초기화
	// 문자열 배열은 문자열 변수와 다르게 strcpy() 함수를 이용하여 문자열로 변경
	
	s.grade = 4.3;				// 구조체 안의 변수 grade의 값을 4.3으로 초기화

	printf("학번 : %d\n", s.number);		// 학번을 구조체를 이용한 변수 s.student로 출력
	printf("이름 : %s\n", s.name);			// 이름을 구조체를 이용한 변수 s.name로 출력
	printf("학점 : %f\n", s.grade);			// 학점을 구조체를 이용한 변수 s.grade로 출력

	return 0;
}

// 출력 예시
// 학번 : 20190001
// 이름 : 홍길동
// 학점 : 4.3
