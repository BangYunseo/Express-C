#include <stdio.h>
#define SIZE 3		

struct student
{
	int number;			
	char name[10];		
	double grade;		
};
int main(void)
{
	struct student list[SIZE];		
	int i;		

	for (i = 0; i < SIZE; i++)		
	{
		printf("학번을 입력하세요 >> ");		
		scanf_s("%d", &list[i].number);

		printf("이름을 입력하세요 >> ");		
		scanf_s("%s", list[i].name, 16);
		// 이름은 처음부터 배열로 생성됐으므로 &를 붙이지 않음

		printf("학점을 입력하세요(실수) >> ");			
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)		
		printf("학번 : %d, 이름 : %s, 학점 : %lf\n", list[i].number, list[i].name, list[i].grade);
	return 0;
}

// 출력 예시
// 출력 예시
// 학번을 입력하세요 >> 20240001
// 이름을 입력하세요 >> 홍길동
// 학점을 입력하세요(실수) >> 4.0
// 학번을 입력하세요 >> 20240002
// 이름을 입력하세요 >> 김코딩
// 학점을 입력하세요(실수) >> 4.32
// 학번을 입력하세요 >> 20240003
// 이름을 입력하세요 >> 박코딩
// 학점을 입력하세요(실수) >> 3.28
// 학번 : 20240001, 이름 : 홍길동, 학점 : 4.000000
// 학번 : 20240002, 이름 : 김코딩, 학점 : 4.320000
// 학번 : 20240003, 이름 : 박코딩, 학점 : 3.280000 
