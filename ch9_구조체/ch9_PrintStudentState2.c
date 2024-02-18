#include <stdio.h>

struct student{
	int number;		
	char name[10];		
	double grade;		
};
int main(void){
	struct student s;	

	printf("학번을 입력하세요 : ");
	scanf_s("%d", &s.number);			

	printf("이름을 입력하세요 : ");
	scanf_s("%s", s.name, 16);			
	// name은 배열의 이름이며 이는 이미 배열을 가리키는 포이너라는 의미
	// 따라서 앞에 & 없음

	printf("학점을 입력하세요(실수) : ");		
	scanf_s("%lf", &s.grade);			

	printf("학번 : %d\n", s.number);		
	printf("이름 : %s\n", s.name);			
	printf("학점 : %lf\n", s.grade);		

	return 0;
}

// 출력 예시
// 학번을 입력하세요 : 20240001
// 이름을 입력하세요 : 홍길동
// 학점을 입력하세요(실수) : 4.3
// 학번 : 20240001
// 이름 : 홍길동
// 학점 : 4.300000
