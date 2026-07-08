//#include <stdio.h>
//
///*
//	함수 원형, 함수 정의를 main 밑에 만들고 맨 위엔 함수선언부 헤더내용
//	을 미리 정의해둔다.
//	이유는? 함수 선언이 없으면 함수 정의는 항상 함수 호출 이전에 있어야 한다.
//	여러 사용자 함수가 있을 때 호출부분의 꼬임을 방지한다. 
//*/
//
//int func(int a, int b);
//
//int main()
//{
//	int ret = func(10, 20);
//	
//	printf("전달된 값은 %d 입니다. \n", ret);
//	
//	return 0;
//}
//
//int func(int a, int b)
//{
//	int ret;
//	ret = a + b;
//	
//	return ret;
//}
