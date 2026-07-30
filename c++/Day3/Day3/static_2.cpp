//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class StaticTest {
//private:
//	static int static_a;
//	int b;
//public:
//	StaticTest();
//	void setAandB(int a);
//	void print() const;
//};
//
//int StaticTest::static_a = 10;
//
//// 일반 함수는 static 멤버 변수의 변경이 가능하다.
//StaticTest::StaticTest() {
//	static_a = 100;
//	b = 20;
//}
//
//void StaticTest::setAandB(int a) {
//	static_a = a;
//	b = a;
//}
//
//void StaticTest::print() const {
//	cout << " A : " << static_a << " B : " << b << endl;
//}
//
//int main() {
//	StaticTest s1, s2;
//	s1.print();
//	s2.print();
//
//	cout << " ============== setA 후 ============== " << endl;
//	s1.setAandB(100);
//	s2.setAandB(50);
//
//	s1.print();
//	s2.print();
//	return	 0;
//}