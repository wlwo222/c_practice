#include <stdio.h>
#include <stdlib.h>
#include "member.h"

const int LINE_LEGNTH = 58; 

void add_member() {
	Member member, temp = {0, "", "", "", ""};
	
	printf("\n");
	printf("=========== 회원 등록 =========== \n");
	printf("이름 :");
	scanf("%s", member.name);
	printf("성별 :");
	scanf("%s", member.sex);
	printf("나이 :");
	scanf("%s", member.age);
	printf("전화번호 :");
	scanf("%s", member.phone_number);
	
	// 파일 쓰기
	
	FILE *ifp, *ofp;
	int res, i;
	
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
		res = fscanf(ifp, "%d %s %s %s %s", &temp.num, temp.name, temp.sex, temp.age, temp.phone_number);
		if (res == EOF && temp.num == 0) {
			member.num = 1;
			break;
		} else if (res == EOF)
		{
			member.num = temp.num + 1;
			break;
		}
	}
	
	snprintf(member.name, 20, "%-19s", member.name);
	snprintf(member.sex, 10, "%-9s", member.sex);
	snprintf(member.age, 5, "%-4s", member.age);
	snprintf(member.phone_number, 20, "%-19s", member.phone_number);
	
	fprintf(ofp, "%d %s %s %s %s\n", 
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
		res = fscanf(ifp, "%d %s %s %s %s\n", 
			&member.num, 
			member.name, 
			member.sex, 
			member.age, 
			member.phone_number);
		
		if (res == EOF) {
			printf(" 모든 회원 정보를 조회하였습니다. \n");
			break;
		} else {
			printf("회원 번호 : %d, 이름 : %s, 성별 : %s, 나이 : %s, 핸드폰 번호 : %s \n",
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
		res = fscanf(ifp, "%d %s %s %s %s", 
			&member.num, 
			member.name, 
			member.sex, 
			member.age, 
			member.phone_number);
			
		if (res == EOF) {
			printf(" 회원을 찾지 못했습니다. \n");
			break;
		} else {
			
			if (input == member.num)
			{
				printf("회원 번호 : %d, 이름 : %s, 성별 : %s, 나이 : %s, 핸드폰 번호 : %s \n",
				member.num, member.name, member.sex, member.age, member.phone_number			
				);
				break;
			}
		}
	}
	
	fclose(ifp);
}

void modify_member()
{
	FILE *ofp;
	Member member;
	int res = 0, target = 0, line_count = 0;
	
	printf("바꾸시려는 회원 번호를 입력해 주세요 : ");
	scanf("%d", &target);
	
	ofp = fopen("member.txt", "r+");
			if (ofp == NULL)
			{
				printf("파일을 열지 못했습니다. \n");
				exit(1);
			}
			
	while(1) {
		res = fscanf(ofp, "%d %s %s %s %s\n", 
			&member.num, 
			member.name, 
			member.sex, 
			member.age, 
			member.phone_number);
			line_count++;
		if (res == EOF) {
			printf(" 회원을 찾지 못했습니다. \n");
			break;
		} else {
			
			if (member.num == target) {
				printf("이름 변경 : ");
				scanf("%s", member.name);
				printf("나이 변경 : ");
				scanf("%s", member.age);
				printf("핸드폰번호 변경 : ");
				scanf("%s", member.phone_number);
				
				line_count = line_count == 1 ? 0 : line_count - 1;
				fseek(ofp, line_count * LINE_LEGNTH, SEEK_SET);
				
				snprintf(member.name, 20, "%-19s", member.name);
				snprintf(member.sex, 10, "%-9s", member.sex);
				snprintf(member.age, 5, "%-4s", member.age);
				snprintf(member.phone_number, 20, "%-19s", member.phone_number);
	
				fprintf(ofp, "%d %s %s %s %s\n", 
					member.num, 
					member.name, 
					member.sex, 
					member.age, 
					member.phone_number);
				break; 
			}
		}
	}
	
	fclose(ofp);
}

void remove_member()
{
	FILE *ofp;
	Member member;
	int res = 0, target = 0, line_count = 0;
	
	printf("삭제하시려는 회원 번호를 입력해 주세요 : ");
	scanf("%d", &target);
	
	ofp = fopen("member.txt", "r+");
			if (ofp == NULL)
			{
				printf("파일을 열지 못했습니다. \n");
				exit(1);
			}
			
	while(1) {
		res = fscanf(ofp, "%d %s %s %s %s\n", 
			&member.num, 
			member.name, 
			member.sex, 
			member.age, 
			member.phone_number);
			
			line_count++;
			
		if (res == EOF) {
			printf(" 회원을 삭제 했습니다. \n");
			break;
		} else {
			
			if (member.num != target) {
				line_count = line_count == 1 ? 0 : line_count - 1;
				fseek(ofp, line_count * LINE_LEGNTH, SEEK_SET);
				
				snprintf(member.name, 20, "%-19s", member.name);
				snprintf(member.sex, 10, "%-9s", member.sex);
				snprintf(member.age, 5, "%-4s", member.age);
				snprintf(member.phone_number, 20, "%-19s", member.phone_number);
	
				fprintf(ofp, "%d %s %s %s %s\n", 
					member.num, 
					member.name, 
					member.sex, 
					member.age, 
					member.phone_number);				
				
				break;
			}
		}
	}
	
	fclose(ofp);
}

