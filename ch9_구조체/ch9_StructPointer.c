#include <stdio.h>

struct student	
{
	int number;		
	char name[10];		
	double grade;		
};
int main(void)
{
	struct student s = { 20240001, "홍길동", 4.3 };
	struct student *p;		// 구조체 student를 포인터 p로 선언

	p = &s;			// p를 구조체 s의 주소값으로 초기화

	printf("학번 : %d\t이름 : %s\t학점 : %f\n", s.number, s.name, s.grade);
	printf("학번 : %d\t이름 : %s\t학점 : %f\n", (*p).number, (*p).name, (*p).grade);
	// 구조체를 이용한 변수 (*p)을 이용한 출력
	// *p는 s의 주소값의 값을 의미
	
	printf("학번 : %d\t이름 : %s\t학점 : %f\n", p->number, p->name, p->grade);
	// 구조체를 이용한 변수 p->을 이용한 출력

	return 0;
}

// 출력 예시
// 학번 : 20240001 이름 : 홍길동 학점 : 4.300000
// 학번 : 20240001 이름 : 홍길동 학점 : 4.300000
// 학번 : 20240001 이름 : 홍길동 학점 : 4.300000
