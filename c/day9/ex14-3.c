//#include <stdio.h>
//
//int main()
//{
//	char animal[5][20];
//	int i, count;
//	
//	// sizeof(animal) = 5 (행 갯수) * 20 (열 갯수)
//	// 행의 수 계산하려면.. 배열 전체 크기 / 배열 첫번째 요소 크기 
//	count = sizeof(animal) / sizeof(animal[0]);
//	
//	for (i = 0; i < count; i++)
//	{
//		printf("%d 번째 칸에 입력할 동물을 입력하세요. :", i);
//		scanf("%s", animal[i]);
//	}
//	
//	for (i = 0; i < count; i++)
//	{
//		printf("%s\n", animal[i]);
//	}
//	
//	return 0;
//}
