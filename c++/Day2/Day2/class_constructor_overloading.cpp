//#include <iostream>
//using namespace std;
//
//class SimpleClass {
//private:
//	int num1;
//	int num2;
//
//public:
//	/*SimpleClass() {
//		num1 = 0;
//		num2 = 0;
//	}
//
//	SimpleClass(int a) {
//		num1 = a;
//		num2 = 0;
//	}
//
//	SimpleClass(int a, int b) {
//		num1 = a;
//		num2 = b;
//	}*/
//
//	// default 매개변수를 쓰는 경우 다른 매개변수를 받는 생성자들을 정의할 수 있다, 다형성
//	SimpleClass(int a = 555, int b = 777) {
//		num1 = a;
//		num2 = b;
//	}
//
//	// 소멸자, 객체가 없어질 때
//	~SimpleClass() {};
//
//	// const 키워드는 객체 멤버변수 값을 변화시키지 않는다는 의미이다.
//	// 따라서, const로 선언된 인스턴스는 const로 선언된 멤버함수만 호출 할 수 있다.
//	void ShowData() const {
//		cout << num1 << ' ' << num2 << endl;
//	}
//
//};
//
//SimpleClass s1() {
//	SimpleClass sc(20, 30);
//	return sc;
//}
//
//int main() {
//	SimpleClass defaultConstructor;
//	SimpleClass oneParameterConstructor(15);
//	SimpleClass twoParameterConstructor(15, 30);
//
//	// 함수의 호출
//	SimpleClass mysc1 = s1();
//	SimpleClass mysc = s1();
//	
//	mysc.ShowData();
//	mysc1.ShowData();
//	defaultConstructor.ShowData();
//	oneParameterConstructor.ShowData();
//	twoParameterConstructor.ShowData();
//
//	return 0;
//}