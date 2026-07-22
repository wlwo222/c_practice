//#include <stdio.h>
//
//int main()
//{
//	FILE *fp;
//	int ch;
//	
//	fp = fopen("C:afaf.txt", "r");
//	
//	if (fp == NULL)
//	{
//		printf("파일이 열리지 않았습니다.\n");
//		return 1;
//	}
//	
//	while(1)
//	{
//		ch = fgetc(fp);
//		printf("%p\n", ch);
//		if (ch == EOF)
//		{
//			break;
//		}
//		
//		putchar(ch);
//	}
//	fclose(fp);
//	return 0;
//}
