//#include <stdio.h> 
//
//int main()
//{
//	// 학생 수와 과목 수는 고정되어있으니 const로 상수선언 
//	const int STUDENT = 3; 
//	const int SUBJECT = 4;
//	// 학생 3명의 4과목 성적을 받기 위한 int 변수 2차원 배열 
//	int score[STUDENT][SUBJECT];
//	
//	// 각 학생들의 총점을 저장하기 위한 변수 
//	int total = 0;
//	
//	// 각 학생들의 평균을 저장하기 위한 변수 
//	double avg;
//	
//	// for문 활용에 필요한 변수 선언 
//	int i, j;
//	
//	for (i = 0; i < STUDENT; i++)
//	{
//		// 학생 하나에 대한 성적 입력
//		// for문을 통해 i번째 학생에 대한 행 진입 
//		printf("학생 %d의 4 과목의 점수 입력 : ", i);
//		for (j = 0; j < SUBJECT; j++)
//		{
//		// 두 번째 for문을 통해 i번째 학생에 대한 j번째 과목 입력 
//			scanf("%d", &score[i][j]);
//		}
//	}
//	
//	for (i = 0; i < STUDENT; i++)
//	{	
//		// 학생마다 총점을 내야하기에 0으로 총점 초기화
//		// 이걸 안하면 전 학생 총점이 섞임. 
//		total = 0;
//		
//		for (j = 0; j < SUBJECT; j++)
//		{
//		// for문을 돌면서 i번째 학생의 j번째 과목 점수를 total에 합함 
//			total += score[i][j];
//		}
//		
//		// i번째 학생의 총점을 더한 후 과목수를 나눠 평균 구하기 
//		avg = total / (double) SUBJECT;
//		printf("학생 %d의 총점 : %d, 평균 : %.2lf\n", i,total, avg);
//	}
//	
//	return 0;
//}
