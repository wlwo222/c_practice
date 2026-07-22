//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int age = 0;
//	char *information[2], temp[80];
//	
//	printf("이름을 입력하세요 (10자리 이내):");
//	fgets(temp, 10, stdin);
//	// 변환문자 null 문자열로 치환 
//	temp[strcspn(temp, "\n")] = '\0';
//	information[0] = malloc(strlen(temp) + 1);
//	
//	// 예외처리 
//	if (information[0] == NULL) { exit(1); }
//	strcpy(information[0], temp);
//	
//	printf("\n 나이를 입력하세요 :");
//	scanf("%d", &age);
//	
//	// 입력버퍼 한 칸 비우기 
//	getchar();
//	printf("\n 핸드폰 번호를 입력하세요: ");
//	fgets(temp, 40, stdin);
//	
//	// 변환문자 null 문자열로 치환 
//	temp[strcspn(temp, "\n")] = '\0';
//	information[1] = malloc(strlen(temp) + 1);
//	
//	// 예외처리 
//	if (information[1] == NULL) { exit(1); }
//	
//	strcpy(information[1], temp);
//	
//	printf("이름은 %s 입니다. \n", information[0]);
//	printf("나이는 %d 입니다. \n", age);
//	printf("전화번호는 %s 입니다. \n", information[1]);
//	
//	free(information[0]);
//	free(information[1]);
//	
//	return 0;
//}
