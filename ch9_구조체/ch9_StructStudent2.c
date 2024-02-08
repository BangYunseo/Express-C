#include <stdio.h>

struct student{
	int number;		// 정수형 변수이자 학번을 저장할 변수 number를 생성
	char name[10];		// 문자형 배열이자 이름을 저장할 배열 name[10]을 생성
	double grade;		// 실수형 변수이자 학점을 저장할 변수 grade를 생성
};
int main(void){
	struct student s;	// 구조체 student를 변수 s로 선언

	printf("학번을 입력하세요 : ");
	scanf_s("%d", &s.number);			// 학번을 입력받고 구조체의 s.number의 주소에 전달

	printf("이름을 입력하세요 : ");
	scanf_s("%s", s.name, 16);			// 이름을 입력받고 구조체의 s.name의 주소에 전달
	// name은 배열의 이름이며 이는 이미 배열을 가리키는 포이너라는 의미
	// 따라서 앞에 & 없음

	printf("학점을 입력하세요(실수) : ");		
	scanf_s("%lf", &s.grade);			// 학점을 입력받고 구조체의 s.grade의 주소에 전달

	printf("학번 : %d\n", s.number);		// 학번을 구조체를 이용한 변수 s.student로 출력
	printf("이름 : %s\n", s.name);			// 이름을 구조체를 이용한 변수 s.name로 출력
	printf("학점 : %lf\n", s.grade);		// 학점을 구조체를 이용한 변수 s.grade로 출력

	return 0;
}

// 출력 예시
// 학번을 입력하세요 : 20190001
// 이름을 입력하세요 : 홍길동
// 학점을 입력하세요(실수) : 4.3
// 학번 : 20190001
// 이름 : 홍길동
// 학점 : 4.3
