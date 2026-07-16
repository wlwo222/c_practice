//#include <stdio.h>
//
//void func(int (*fp)(int, int));
//int sum(int, int);
//int mul(int, int);
//int max(int, int);
////double div (int a, double b);
//
//int main()
//{
//	int sel;
//	
//	printf("01 두 정수의 합 : \n");
//	printf("02 두 정수의 곱 : \n");
//	printf("03 두 정수 중 큰 값 계산 : \n");
////	printf("04 두 정수 나누기 : \n");
//	printf("원하는 연산을 선택하세요. : \n");
//	scanf("%d", &sel);
//	
//	switch(sel)
//	{
//		case 1: func(sum); break;
//		case 2: func(mul); break;
//		case 3: func(max); break;
////		case 4: func(div); break;
//	}
//	
//	return 0;
//}
//
//void func(int (*fp)(int, int))
//{
//	int a, b, res;
//	
//	printf("두 정수의 값을 입력하세요 : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("결괏값은 : %.1lf\n ", res);
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int max (int a, int b)
//{
//	return a > b ? a : b;
//}
//
////double div (int a, double b)
////{
////	return a / b;
////}
