#include <stdio.h>

int main()
{
//	int num, grade;					// getchar() 함수로 값을 받는경우 int 선언 
	int num;
	char grade;
	
	printf("학번 입력 : ");
	scanf("%d", &num);
//	getchar();						// 개행문자 제거 
	printf("학점 입력 : ");
//	grade = getchar();
	scanf(" %c", &grade);			// " %c" 로 입력버퍼 안 첫 번째 값 버리기 
	printf("학번 : %d, 학점 : %c", num, grade);
	
	return 0;
}
