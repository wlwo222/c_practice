//#include <stdio.h>
//#include <string.h>
//
//void get_score(char *name, int *score, int size);
//void get_total_score(char *name, int *score, int size);
//void get_avg_score(char *name, int *score, int size);
//
//int main()
//{
//	const int SUBJECT_COUNT = 5;
//	char name[10] = "철수";
//	int score[SUBJECT_COUNT];
//	
//	get_score(name, score, SUBJECT_COUNT);
//	get_total_score(name, score, SUBJECT_COUNT);
//	get_avg_score(name, score, SUBJECT_COUNT);
//	
//	return 0;
//}
//
//void get_score(char *name, int *score, int size)
//{
//	int i;
//	char question[100];
//	
//	for (i = 0; i < size; i++)
//	{
//		switch(i)
//		{
//			case 0:
//				strcpy(question, "국어 점수를 입력하세요. : ");
//				break;
//			case 1:
//				strcpy(question, "영어 점수를 입력하세요. : ");
//				break;
//			case 2:
//				strcpy(question, "수학 점수를 입력하세요. : ");
//				break;
//			case 3:
//				strcpy(question, "사회 점수를 입력하세요. : ");
//				break;
//			case 4:
//				strcpy(question, "과학 점수를 입력하세요. : ");
//				break;					
//		}
//		
//		printf("%s", question);
//		scanf("%d", &score[i]);
//	}
//}
//
//void get_total_score(char *name, int *score, int size)
//{
//	int i, total_score = 0;
//	
//	for (i = 0; i < size; i++) { total_score += score[i]; }
//	printf("\n%s 학생의 총 점수는 %d 입니다.", name, total_score);
//}
//
//void get_avg_score(char *name, int *score, int size)
//{
//	int i, total_score = 0;
//	
//	for (i = 0; i < size; i++) { total_score += score[i]; }
//	printf("\n%s 학생의 평균 점수는 %.2lf 입니다.", name, (double) total_score / size );
//}
