#include <stdio.h>
#define SEATS 10

int main(void){
	char answer1;						// 좌석 예약 여부를 입력받을 변수 answer1
	int answer2, i;						// 선택할 좌석을 입력받을 변수 answer2
	int movie_seat[10] = { 0 };				// 좌석 10개를 저장할 배열을 생성하고 0으로 초기화

	while (1){
		printf("좌석을 예약하시겠습니까? (y 또는 n) ");	
		scanf_s(" %c", &answer1, 4);			// 입력받은 값을 변수 answer1에 저장

		if (answer1 == 'y'){				// y라면 좌석을 예약
			printf("-----------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");			
			printf("-----------------------\n");
			for (i = 0; i < SEATS; i++){
				printf("%d ", movie_seat[i]);
				// 앞에서 배열을 초기화했으므로 0 또는 1이 출력
				// 1이 출력되면 예약된 좌석, 0이 출력되면 예약하지 않은 좌석
			}
			printf("\n");

			printf("몇 번째 좌석을 예약하시겠습니까? ");		
			scanf_s("%d", &answer2);		// 입력받은 좌석의 번호를 변수 answer2에 저장

			if (answer2 <= 0 || answer2 > SEATS){	// 만약 answer2의 값이 1 ~ 10 사이의 값이 아니라면
				printf("1부터 10 사이의 숫자를 입력하세요.\n");	
				continue;	
			}
			if (movie_seat[answer2 - 1] == 0){	// 만약 변수 answer2 - 1의 배열값이 0이라면
				movie_seat[answer2 - 1] = 1;	// 그 자리에 1을 저장
				printf("예약되었습니다.\n");	
			}
			else{      				 // 만약 변수 answer2 - 1 의 배열값이 1이라면
				printf("이미 예약된 자리입니다.\n");	
			}
		}
		if (answer1 == 'n')		// 만약 대답이 n이라면 그대로 반복문을 종료
			return 0;
	}
	return 0;
}
