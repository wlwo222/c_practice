//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct profile
//{
//	char name[20];
//	int age;
//	double height;
//	char *intro;
//};
//
//int main()
//{
//	struct profile won;
//	strcpy(won.name, "원천지재");
//	won.age = 31;
//	won.height = 174.2;
//	
//	won.intro = (char *)malloc(80);
//	// 예외처리도 필요 
//	printf("자기 소개 : ");
//	gets(won.intro);
//	
//	printf("이름 : %s\n", won.name);
//	printf("나이 : %d\n", won.age);
//	printf("키 : %.1lf\n", won.height);
//	printf("소개 : %s\n", won.intro);
//	
//	free(won.intro);
//	
//	return 0;
//}
