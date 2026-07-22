//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char temp[80];
//	char *str[3];
//	int i;
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("문자열을 입력하세요 : ");
//		// fgets로 바꾸는것이 좋음.
//		// 만약 바꿨을 때 strspn 함수를 통해 \n을 \0으로 바꾸는 것이 좋겠다. 
//		gets(temp);
//		// malloc 실패 시 예외처리가 없음. 
//		str[i] = (char *)malloc(strlen(temp) + 1);
//		strcpy(str[i], temp);
//	}
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", str[i]);
//		free(str[i]);
//	}
//	
//	return 0;
//}
