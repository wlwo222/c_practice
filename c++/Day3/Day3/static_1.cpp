//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class StaticTest {
//public:
//	static int static_a;
//	int b;
//	StaticTest();
//	void print();
//};
//
//StaticTest::StaticTest() {
//	b = 10;
//}
//
//// static은 클래스 멤버이다. 객체 멤버가 아님.
//// 그래서 초기화를 클래스 영역 밖에서 선언한다.
//int StaticTest::static_a = 10;
//
//void StaticTest::print() {
//	cout << " a : " << static_a << " b : " << b << endl;
//}
//
//int main() {
//	StaticTest s1, s2;
//	s1.print();
//	s2.print();
//
//	StaticTest::static_a += 5;
//	s1.print();
//	s2.print();
//
//	s1.static_a += 30;
//	s1.print();
//	s2.print();
//
//	s2.b += 5;
//	s1.print();
//	s2.print();
//
//	return	 0;
//}