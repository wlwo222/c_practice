//#include <stdio.h>
//
//int main()
//{
//	FILE *fp;
//	char str[] = "banana1151515235 \n \t \n \t qrqrqrqrr \n \t qqww";
//	int i = 0;
//	
//	fp = fopen("b.txt", "w");
//	
//	if (fp == NULL)
//	{
//		printf("파일을 만들지 못했습니다.");
//		return 1;
//	}
//	
//	while (str[i] != '\0')
//	{
//		// 문자를 파일에 출력 
//		fputc(str[i], fp);
//		i++;
//	}
//	
//	fputc('\n', fp);
//	fclose(fp);
//	
//	return 0;
//}
