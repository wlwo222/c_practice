//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// 포인터를 나타내는 기호는 자료형 뒤에 와도 상관x 
//	// const 키워드가 어디 붙냐에 따라 상수화 되는 것이 달라짐 
//	const int* pa = &a; 	// 간접 참조로 값 변경 x, 주소값 변경 o 
//							// 데이터가 상수화 
//	int* const pb = &a;		// 간접 참조로 값 변경 o, 주소값 변경 x 
//							// 변수가  상수화 
//							
//	const int* const pc = &a;	// 모두 다 변환이 안됨
//	 
//	pa = &b;
//	
//	// 컴파일시 오류 발생, const 포인터기 때문에 데이터값 변경 x 
////	*pa = 100; 
//	// 컴파일시 오류 발생, 데이터 값 변경은 되지만 주소값 변경 x 
////	pb = &a;
//
//	*pb = 200;
//	
//	printf("정수 a 값 : %d\n", a);
//	printf("pa 포인터 : %d\n", *pa);
//	
//	
//	printf("정수 b 값 : %d\n", b);
//	printf("pb 포인터 : %d\n", *pb);
//	
//	return 0;
//}
