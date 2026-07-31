///* 소멸 순서 ( 소멸자 호출 순서 ) -> 먼저 생성된 객체가 가장 나중에 소멸된다.*/
//#include <iostream>
//using namespace std;
//
//class SoBase {
//private:
//	int baseNum;
//public:
//	SoBase(int n) : baseNum(n) {
//		cout << "SoBase() : " << baseNum << endl;
//	}
//
//	~SoBase() {
//		cout << "~SoBase() : " << baseNum << endl;
//	}
//	
//};
//
//class SoDerived : public SoBase {
//private:
//	int derivNum;
//public:
//	SoDerived(int n) : SoBase(n), derivNum(n) {
//		cout << "SoDerived() : " << derivNum << endl;
//	}
//	~SoDerived() {
//		cout << "~SoDerived()" << endl;
//	}
//};
//
//int main() {
//	SoDerived d1(10);
//	SoDerived d2(15);
//	SoDerived d3(27);
//	return 0;
//}