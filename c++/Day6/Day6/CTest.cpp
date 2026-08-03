//#include <iostream>
//using namespace std;
//
//class CTest {
//private:
//	int  num;
//public:
//	CTest(int n): num(n) {
//		cout << "Called CTest(n) num : " << num << endl;
//	}
//	// 가상함수 선언
//	virtual void func1() const {
//		cout << "CTest::func1()" << endl;
//	}
//
//	// 부모클래스 소멸자에 virtual 붙여주기
//	virtual ~CTest() {
//		cout << "CTest :: Destructor" << endl;
//	}
//};
// 
//class CSub : public CTest{
//private:
//	int subN;
//public:
//	CSub(int a, int b) : CTest(a), subN(b) {
//		cout << "Called CSub(int a, int b)  a : "<< a << " b : " << b << endl;
//	}
//	void func1() const override{
//		cout << "Csub::func1()" << endl;
//	}
//	~CSub() {
//		cout << "CSub :: Destructor" << endl;
//	}
//};
//
//int main () {
//	/*CSub a(1, 2);
//	CTest b(5);
//
//	a.func1();
//	b.func1();*/
//
//	// unique는 자식클래스 소멸자를 호출하지 않는다.
//	unique_ptr<CTest> ptr = make_unique<CSub>(3, 22);
//	// shard_ptr은 자식클래스 소멸자까지 호출
//	shared_ptr<CTest> ptr2 = make_shared<CSub>(5, 22);
//
//	return 0;
//}