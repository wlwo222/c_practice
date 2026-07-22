//#include <stdio.h>
//#define STUDENT	5
//#define SUBJECT	3
//
//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//void input_student_score(struct score*);
//void print_students_score(struct score*);
//
//int main()
//{
//	struct score student_score[STUDENT];
//	
//	input_student_score(student_score);
//	print_students_score(student_score);
//	
//	return 0;
//}
//
//void input_student_score(struct score *score_list)
//{
//	int i;
//	for (i = 0; i < STUDENT; i++)	
//	{
//		printf("%d 번째 학생의 국어 점수 입력 : ", i + 1);
//		scanf("%d", &score_list[i].kor);
//		printf("%d 번째 학생의 영어 점수 입력 : ", i + 1);
//		scanf("%d", &score_list[i].eng);
//		printf("%d 번째 학생의 수학 점수 입력 : ", i + 1);
//		scanf("%d", &score_list[i].math);
//	}
//}
//
//void print_students_score(struct score *score_list)
//{
//	int i, kor_total = 0, eng_total = 0, math_total = 0,
//	student_total = 0, total = 0;
//	double student_avg = 0.0, avg = 0.0;
//	
//	printf("================ 성적 출력 ================ \n");
//	
//	for (i = 0; i < STUDENT; i++)	
//	{	
//		kor_total += score_list[i].kor;
//		eng_total += score_list[i].eng;
//		math_total += score_list[i].math;
//		student_total = score_list[i].kor + score_list[i].eng + score_list[i].math;
//		student_avg = student_total / (double)SUBJECT;
//		
//		total += student_total;
//		avg += student_avg;
//		
//		printf("%d 번째 학생의 총 점수 는 %d 입니다.\n", i + 1, student_total);
//		printf("%d 번째 학생의 평균은 %.1lf 입니다.\n", i + 1, student_avg);
//	}
//	
//	printf("학생들의 국어 총 점수 는 %d 입니다.\n", kor_total);
//	printf("학생들의 영어 총 점수 는 %d 입니다.\n", eng_total);
//	printf("학생들의 수학 총 점수 는 %d 입니다.\n", math_total);
//	
//	printf("학생들의 국어 평균은 %.1lf 입니다.\n", kor_total / (double) STUDENT);
//	printf("학생들의 영어 평균은 %.1lf 입니다.\n", eng_total / (double) STUDENT);
//	printf("학생들의 수학 평균은 %.1lf 입니다.\n", math_total / (double) STUDENT);
//	
//	printf("학생들의 총 점수는 %d 입니다.\n", total);
//	printf("학생들의 총 평균은 %.1lf 입니다.\n", avg / (double) STUDENT);
//}

