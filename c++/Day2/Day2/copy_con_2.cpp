//#include <iostream>
//using namespace std;
//
//int main() {
//	// C++에서만 이렇다.
//	// 복사 초기화. 복사생성자 호출시 = 연산자를 사용하여 초기화
//	int num = 3;
//
//	// 직접 초기화, 복사생성자 호출 안됨. 초기값 30을 직접 할당하는 이니셜라이즈 리스트
//	int num1(30);
//
//	// 중괄호 직접 초기화 (C++ 11 이후로 적용된 문법) 
//	int num2{ 300 };
//
//	// 중괄호를 복사해서 초기화
//	int num3 = { 3000 };
//
//	// 암묵적인 변환을 허락한다. 소수점을 모두 버림.
//	int x = 3.14;
//
//	// 암묵적인 변환을 허락하지 않는다.
//	//int x1{ 3.14 };
//
//	int x2(3.14);
//
//	cout << num << endl;
//	cout << num1 << endl;
//	cout << num2 << endl;
//	cout << num3 << endl;
//	cout << x << endl;
//	/*cout << x1 << endl;*/
//	cout << x2 << endl;
//
//	return 0;
//}