//#include <stdio.h>
//
//int main()
//{
//	FILE *fp;
//	int age;
//	char name[20];
//	
//	fp = fopen("a.txt", "r");
//	
//	fscanf(fp, "%d", &age);
//	// 입력버퍼 비우기 
//	while (fgetc(fp) != '\n');
//	
//	fgets(name, sizeof(name), fp);
//	
//	printf("나이 : %d, 이름 : %s", age, name);
//	fclose(fp);
//	
//	return 0;
//}
