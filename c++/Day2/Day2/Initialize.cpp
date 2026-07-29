//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	// 멤버 initialize 문법, 함수 머리부분부터 실행되고, 생성자 함수 정의가 실행된다.
//	// 즉 객체가 만들어지기 전 (생성되기 전)에 초기화된다.
//	Person(string n, int a): name(n), age(a) {
//		/*name = n;
//		age = a;*/
//		cout << "생성자 호출" << endl;
//	}
//
//	void print() const {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//};
//
//int main()
//{
//	Person p("홍길동", 100);
//	p.print();
//
//
//	return 0;
//}