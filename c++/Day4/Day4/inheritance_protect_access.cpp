//#include <iostream>
//using namespace std;
//
//class Base {
//private:
//	int num1;
//protected:
//	int num2;
//public:
//	int num3;
//	Base(): num1(1), num2(2), num3(3) {}
//};
//
//class Derived : protected Base {
//public:
//	void getNum2() const {
//		cout << num2 << endl;
//	}
//};
//
//
//int main()
//{
//	Derived drv;
//	drv.getNum2();
//
//	return 0;
//}