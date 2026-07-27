//#include <iostream>
//using namespace std;
//
///* 
// 데이터 영역은 전역변수, static 변수 등이 저장된다.
// 스택 영역은 지역변수, 매개변수가 저장된다.
// 힙 영역은 메모리 동적 할당 변수가 저장된다. >> malloc, free 등..
// 코드 영역은 소스코드가 저장되는 영역이다.
//*/
//
///*
// call-by-value : 입력에 상수값을 넘겨줘 함수 정의영역에서 그 값을 복사하여 사용
// call-by-reference : 입력에 변수 주소값을 넘겨줘 변수 값을 바꾸는 방법
//*/
//
//
//namespace AAA {
//	namespace BBB {
//		namespace CCC {
//			int num1;
//			int num2;
//		}
//	}
//}
//
//namespace ABC = AAA::BBB::CCC;
//
//int main()
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	cout << ABC::num1 << ABC::num2 << endl;
//
//	return 0;
//}