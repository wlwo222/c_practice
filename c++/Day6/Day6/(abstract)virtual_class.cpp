//#include <iostream>
//using namespace std;
//
//// 순수 가상함수를 포함한 클래스를 추상클래스라고 한다.
//class CInterface {
//public:
//	CInterface() {
//		cout << "CInterface constructor" << endl;
//	}
//
//	// 상속받는 자식클래스는 이 함수를 반드시 구현해야한다.
//	virtual void getData() const = 0;
//};
//
//class CInSub : public CInterface {
//public:
//	CInSub() {
//		cout << "CInSub constructor" << endl;
//	}
//
//	void getData() const override{
//		cout << "pure virtual function()" << endl;
//	}
//};
//
//int main() {
//	CInSub c1;
//	c1.getData();
//
//	return 0;
//}