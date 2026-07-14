//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20;
//	// 포인터가 const 일경우, 이녀석을 통해 데이터를 바꿀 순 없음.
//	// 포인터는 바꿀 수 있음.
//	// *pa = 10; 이거 안됨 
//	const int *pa = &a;
//	
//	printf("변수 a 값 : %d\n", *pa);
//	pa = &b;
//	printf("변수 b 값 : %d\n", *pa);
//	pa = &a;
//	a = 100;
//	printf("변수 a 값 : %d\n", *pa);
//	
//	return 0;
//}
