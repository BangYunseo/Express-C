#include <stdio.h>

double F2C(double tempC);			
double C2F(double tempF);			
void StartMenu();				

int main(void){
	char menu;							
	double temp;						

	while (1){
		StartMenu();
		printf("메뉴에서 선택하세요 : ");	
		menu = getchar();					

		if (menu == 'q')	// 만약 q를 입력받으면
			break;		// 메뉴를 종료
		else if (menu == 'c')	// 만약 c를 입력받으면 섭씨온도를 입력받고 화씨온도로 출력
		{
			printf("섭씨온도 : ");		
			scanf_s("%lf", &temp);		
			printf("화씨온도 : %lf\n", C2F(temp));	
		}
		else if (menu == 'f')	// 만약 f를 입력받으면 화씨온도를 입력받고 섭씨온도로 출력
		{
			printf("화씨온도 : ");		
			scanf_s("%lf", &temp);		
			printf("섭씨온도 : %lf\n", F2C(temp));	
		}
		getchar();						// 이전에 입력된 개행문자를 삭제함
	}
	return 0;
}
double F2C(double tempF){	// 화씨온도에서 섭씨온도로 변환
	return (tempF - 32.0) * 5.0 / 9.0;			// °C : 5/9(tempF − 32)
}
double C2F(double tempC){	// 섭씨온도에서 화씨온도로 변환
	return 9.0 / 5.0 * tempC + 32;				// F : 5/9tempC + 32
}
void StartMenu(){
	printf("==========================================\n");
	printf("'c' 섭씨온도(C)에서 화씨온도(F)로 변환\n");
	printf("'f' 화씨온도(F)에서 섭씨온도(C)로 변환\n");
	printf("'q' 종료\n");
	printf("==========================================\n");
}
