/* 
	c에서 함수를 구별하는 방법은 함수명으로 구분한다.
	c++은 함수명과 입력이 함수를 구분하는 기준이다. 출력이 다른경우는..? 함수를 구별하는 기준이 아니다.
	오버로딩을 한글로 번역하면.. 다중 정의!, 연산자 오버로딩도 있다.
	오버라이딩은 상속 관계에서 새로이 정의되는 함수를 뜻함. 한글로 번역하면 재정의

	c++에선 함수 입력에 대한 기본값 설정이 가능하다.
	default 값은 오른쪽부터 정의해야한다. 그래서 읽는건 왼쪽부터 읽음

	int MyFuction(int num = 7)
	{
		return num + 1;
	}

	int a = MyFunction(); // a = 8
	int b = MyFunction(11); // b = 12
 */

//#include <iostream>
//
//void MyFunc(void) {
//	std::cout << "MyFunc(void) called" << std::endl;
//}
//
//void MyFunc(char c) {
//	std::cout << "MyFunc(char c) called" << std::endl;
//}
//
//// default를 오른쪽부터 선언해야함
//void MyFunc(int a, int b = 8) {
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main()
//{
//	MyFunc();
//	MyFunc('a');
//	MyFunc(1, 6);
//
//	return 0;
//}