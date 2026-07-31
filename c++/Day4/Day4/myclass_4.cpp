//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	void show() {
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
//
//	ptr = &obj;
//	// Base class가 출력됨, Up casting
//	ptr->show();
//
//	// 자식 타입의 객체 포인터 선언
//	Derived* ptr2 = nullptr;
//	ptr2 = &obj;
//	ptr2->show();
//
//	// 자식 객체의 포인터로 부모클래스를 찍을 순 없다.
//	Base obj2;
//	// 부모 클래스에서 자식객체로 형변환이 가능하다. (Down Casting)
//	ptr2 = (Derived *) &obj2;
//	ptr2->show();
//	return 0;
//}