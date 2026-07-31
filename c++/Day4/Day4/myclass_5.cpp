//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void show() {
//		cout << "Base class" << endl;
//	}
//};
//class Derived : public Base {
//public:
//	void show() {
//		cout << "Derived class" << endl;
//	}
//};
//
//
//int main() {
//	// 부모 타입의 객체 포인터 선언
//	Base* ptr = nullptr;
//	Derived obj;
//	ptr = &obj;
//
//	// Base class가 출력됨, Up casting
//	ptr->show();
//	return 0;
//}