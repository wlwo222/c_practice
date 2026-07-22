#include <stdio.h>
#include <stdlib.h>
#include "member.h"

void add_member() {
	Member member;
	Member temp;
	int previous_num;
	
	printf("\n");
	printf("=========== 회원 등록 =========== \n");
	printf("이름 :");
	scanf("%s", &member.name);
	printf("성별 :");
	scanf("%s", &member.sex);
	printf("나이 :");
	scanf("%d", &member.age);
	printf("전화번호 :");
	scanf("%s", &member.phone_number);
	
	// 파일 쓰기
	
	FILE *ifp, *ofp;
	int res;
	
	ifp = fopen("member.txt", "r");
	if (ifp == NULL)
	{
		printf("파일을 열지 못했습니다. \n");
		exit(1);
	}
	
	ofp = fopen("member.txt", "a");
	if (ofp == NULL)
	{
		printf("파일을 열지 못했습니다. \n");
		exit(1);
	}
	
	while(1) {
		res = fscanf(ifp, "%d %s %s %d %s", &temp.num, temp.name, temp.sex, &temp.age, temp.phone_number);
		if (res == EOF) {
			temp.num++;
			member.num = temp.num;
			break;
		}
	}
	
	fprintf(ofp, "%d %s %s %d %s \n", 
		member.num, 
		member.name, 
		member.sex, 
		member.age, 
		member.phone_number);

	printf("회원 등록을 완료했습니다.");
	fclose(ifp);
	fclose(ofp);
}

void member_list()
{
	FILE *ifp;
	Member member;
	int res; 
		
	ifp = fopen("member.txt", "r");
	if (ifp == NULL)
	{
		printf("파일을 열지 못했습니다. \n");
		exit(1);
	}
	
	while(1) {
		res = fscanf(ifp, "%d %s %s %d %s", 
			&member.num, 
			member.name, 
			member.sex, 
			&member.age, 
			member.phone_number);
			
		if (res == EOF) {
			printf(" 모든 회원 정보를 조회하였습니다. \n");
			break;
		} else {
			printf("회원 번호 : %d, 이름 : %s, 성별 : %s, 나이 : %d, 핸드폰 번호 : %s \n",
				member.num, member.name, member.sex, member.age, member.phone_number			
			);
		}
	}
}

void member_search()
{
	FILE *ifp;
	Member member;
	int res, input = 0; 
	
	printf("찾으시려는 회원 번호를 입력해 주세요 : ");
	scanf("%d", &input);
	
	ifp = fopen("member.txt", "r");
	if (ifp == NULL)
	{
		printf("파일을 열지 못했습니다. \n");
		exit(1);
	}
	
	while(1) {
		res = fscanf(ifp, "%d %s %s %d %s", 
			&member.num, 
			member.name, 
			member.sex, 
			&member.age, 
			member.phone_number);
			
		if (res == EOF) {
			printf(" 회원을 찾지 못했습니다. \n");
			break;
		} else {
			
			if (input == member.num)
			{
				printf("회원 번호 : %d, 이름 : %s, 성별 : %s, 나이 : %d, 핸드폰 번호 : %s \n",
				member.num, member.name, member.sex, member.age, member.phone_number			
				);
				break;
			}
		}
	}
}

void modify_member()
{
	FILE *ifp, *ofp;
	Member member, input_member;
	int res, input = 0; 
	
	printf("바꾸시려는 회원 번호를 입력해 주세요 : ");
	scanf("%d", &input);
	
	ifp = fopen("member.txt", "r");
	if (ifp == NULL)
	{
		printf("파일을 열지 못했습니다. \n");
		exit(1);
	}
	
	while(1) {
		res = fscanf(ifp, "%d %s %s %d %s", 
			&member.num, 
			member.name, 
			member.sex, 
			&member.age, 
			member.phone_number);
			
		if (res == EOF) {
			printf(" 회원을 찾지 못했습니다. \n");
			break;
		} else {
			
			if (input == member.num)
			{
				printf("회원 번호 : %d, 이름 : %s, 성별 : %s, 나이 : %d, 핸드폰 번호 : %s \n",
				member.num, member.name, member.sex, member.age, member.phone_number			
				);
				break;
			}
		}
	}
}

