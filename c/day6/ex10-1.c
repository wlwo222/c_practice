//#include <stdio.h>
//
//int main()
//{
//	int ary[3];
//	int i;
//	
//	*(ary + 0) = 10;	// ary[0] = 10;
//	*(ary + 1) = *(ary + 0) + 10;	// ary[0] = 10;
//	
//	printf("ary : %u\n", ary);
//	
//	// 간접참조연산자를 통한 배열 요소 접근
//	printf("ary + 0 : %u\n", *(ary));
//	printf("ary + 1 : %u\n", ary + 1);
//	
////	printf("세 번째 배열 요소에 키보드 입력 : ");
////	scanf("%d", ary + 2);
//	
//	for (i = 0; i < 3; i++)
//	{ 
//		// *(배열명 + i) -> 배열의 i번째 요소 
//		printf("%5d", *(ary + i));
//	}
//	
//	return 0;
//}
