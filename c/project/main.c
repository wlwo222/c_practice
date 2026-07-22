#include <stdio.h>

void print_menu();
void add_member();
void member_list();
void member_search();
void modify_member();

int main() {
	int input;
	
	while(1) {
		print_menu();
		scanf("%d", &input);
		
		switch(input) {
			case 1:	// 회원 등록 
				add_member(); break;
			case 2:	// 회원 전체 조회 
				member_list(); break;
			case 3:	// 회원 번호 조회 
				member_search(); break;
			case 4:	// 회원 정보 수정 
				modify_member(); break;
			case 5:	// 회원 삭제 
				add_member(); break;
			case 6:	// 종료 
				break;
		}
			
				
		if (input == 6) { break; }
	}
	
	
	return 0;
}

void print_menu() {
	printf("\n");
	printf("=============== 회원 관리 프로그램 ===============\n");
	printf("1. 회원 등록 \n");
	printf("2. 회원 전체 조회 \n");
	printf("3. 회원 검색 \n");
	printf("4. 회원 정보 수정 \n");
	printf("5. 회원 삭제 \n");
	printf("6. 종료 \n");
	printf("입력 > ");
}
