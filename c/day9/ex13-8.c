//#include <stdio.h>
//
//int *sum(int, int);
//
//int main()
//{
//	//int형 포인터 변수 선언 
//	int *resp, res;
//	
//	// *sum이라고 선언한 이유는 반환값이 주소값이기 때문에 
//	resp = sum(10, 20);
//	
//	printf("두 정수의 합 : %d\n", *resp);
//	
//	return 0;
//}
//
//int *sum(int a, int b)
//{
//	static int res;
//	res = a + b;
//	return &res;
//}
