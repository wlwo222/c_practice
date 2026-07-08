//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 5;
//	int res;
//	
//	res = a / b * 2;			// 우선순위가 같으므로 왼쪽부터 연산 
//	printf("res = %d\n", res);
//	
//	res = ++a * 3;				// a 먼저 증가시키고 연산 
//	printf("res = %d\n", res);
//	
//	res = (a > b) && (a != 5);	// and 연산, 숏 서킷룰을 따름 
//	printf("res = %d\n", res);
//	
//	res = a % 3 == 0;			// 나머지가 1이기때문에 false, 0 
//	printf("res = %d\n", res);
//	printf("a = %d\n", a);		// a가 11행에서 1 증가했으므로, 11 
//	
//	return 0;
//}
