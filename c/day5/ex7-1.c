//#include <stdio.h> 
//
///*
//	함수 선언부분, 컴파일러에 함수 선언을 미리 알려 메모리를 할당한다.
//	메모리 할당과 함수 호출 꼬임을 예방하는 목적이 있기도 하다. 
//	함수 선언은 함수의 머리부분만을 정의하여 출력과 입력을 미리 알려준다. 
//*/
//int sum(int x, int y);
//
//int main()
//{
//	int a = 10, b = 20;
//	int result;
//	
//	result = sum(a, b);		// 함수 호출부분, 출력값을 저장하기위한 result 
//	printf("result : %d\n", result);
//	
//	return 0;
//}
//
///*
//	함수 정의, 입력을 통해 받은 두 변수를 이용하여 요구사항을 구현 
//	int 형의 출력이 있어야 하기 때문에 return구문이 필요하다. 
//*/
//
//int sum(int x, int y)
//{
//	int temp;
//	
//	temp = x + y;
//	
//	return temp;
//}
