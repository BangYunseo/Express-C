#include <stdio.h>
#define SIZE 10		

int main(void)
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };		
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++){
		least = i;					// 최솟값의 index를 0으로 초기화한 변수 i로 저장
		for (j = i + 1; j < SIZE; j++)	
		{
			if (list[j] < list[least])		// 만약 list[j]의 값이 list[least]보다 작을 때,
				least = j;			// least에 j를 저장
		}
		temp = list[i];			
		list[i] = list[least];	
		list[least] = temp;
		
		// 선택 정렬 알고리즘(temp 이용)
		// 파이썬에서는 A, B = B, A의 형태로 swap함수를 이용 가능
	}
	printf("정렬된 배열\n");		
	for (i = 0; i < SIZE; i++)	
		printf("%d ", list[i]);		
	printf("\n");	

	return 0;
}
