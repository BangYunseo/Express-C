#include <stdio.h>
#define SIZE 10		

int main(void){
	int key, i;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	printf("탐색할 값을 입력하세요 : ");	
	scanf_s("%d", &key);	

	for (i = 0; i < SIZE; i++){
		if (list[i] == key)				// 만약 list[i]의 값이 입력받은 key값과 일치한다면
			printf("탐색 성공 인덱스 = %d\n", i);	// 탐색 성공 인덱스인 변수 i를 출력
	}
	printf("탐색 종료\n");	
	return 0;
}
