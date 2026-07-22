#include <stdio.h>
#define SIZE	5

void input_score(int*);
void output_score(int*);
void get_avg_score(int*);
void get_max_score(int*);
void get_min_score(int*);

int main()
{
	int menu = 0;
	int score[SIZE];
	
	while(1)
	{
		printf("\n=============== 학생 성적 관리 ===============\n");
		printf("1. 점수 입력 : \n");
		printf("2. 점수 출력 : \n");
		printf("3. 평균 출력 : \n");
		printf("4. 최고 점수 출력 : \n");
		printf("5. 최저 점수 출력 : \n");
		printf("6. 종료\n");
		printf("선택 : ");
		scanf("%d", &menu);
		
		switch(menu)
		{
			case 1: input_score(score); break;
			case 2: output_score(score); break;
			case 3: get_avg_score(score); break;
			case 4: get_max_score(score); break;
			case 5: get_min_score(score); break;	
			case 6: break;	
			default: printf("올바른 값을 입력해 주세요. \n"); break;	
		}
		if (menu == 6) { break; }
	}
	
	return 0;
}

void input_score(int* score)
{
	int i;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d 번째 학생 점수 입력 : ", i + 1);
		scanf("%d", &score[i]);
		printf("\n");
	}
}

void output_score(int* score)
{
	int i;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d 번째 학생 점수 : %d\n", i + 1, score[i]);
	}
}

void get_avg_score(int* score)
{
	int total = 0, i;
	
	for (i = 0; i < SIZE; i++)
	{
		total += score[i];		
	}
	
	printf("학생들의 평균 점수 : %.1lf\n", total / (double) SIZE);
}

void get_max_score(int* score)
{
	int max = score[0], i;
	
	for (i = 1; i < SIZE; i++)
	{
		max = max >= score[i] ? max : score[i];
	}
	
	printf("학생들 중 최고 점수 : %d\n", max);
}

void get_min_score(int* score)
{
	int min = score[0], i;
	
	for (i = 1; i < SIZE; i++)
	{
		min = min <= score[i] ? min : score[i];
	}
	
	printf("학생들 중 최저 점수 : %d\n", min);
}
