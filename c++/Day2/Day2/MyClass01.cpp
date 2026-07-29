///* 
//	학번, 이름, 나이를 갖는 클래스 
//	생성자는 객체를 생성하는 녀석, 멤버변수 값을 초기화한다.
//	소멸자는 객체를 소멸시키는 녀석
//	생성자는 객체생성시 자동으로 호출된다. 
//	그리고 출력이 없고 클래스명과 동일한 멤버함수이다.
//
//	디폴트 생성자는 자동으로 생성되고, 입력을 받지 않는 생성자이다.
//	하지만 생성자를 정의하는경우 자동으로 소멸되고, 정의된 생성자로 대체된다.
//	그리고 생성자는 오버로딩이 가능하다.
//*/
// 
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Myclass {
//
//private:
//	int id;
//	char name[20];
//	int age;
//
//public:
//	// 선언부에선 변수이름 생략 가능
//	Myclass(int, const char*, int);
//	Myclass() {};
//	void getData();
//	void setId(int id) {
//		this -> id = id;
//	}
//
//	void setName(const char* name) {
//		strcpy_s(this -> name, name);
//	}
//
//	void setAge(int age) {
//		this -> age = age;
//	}
//};
//
//// 생성자는 객체를 생성하고 멤버 변수들을 초기화한다.
//// 외부에 선언하는경우 :: 범위지정연산자를 통해 선언한다.
//Myclass::Myclass(int id, const char* name, int age) {
//	this->id = id;
//	strcpy_s(this->name, name);
//	this->age = age;
//}
//
//void Myclass::getData() {
//	cout << "number :" << this -> id << endl;
//	cout << "name :" << this -> name << endl;
//	cout << "age :" << this -> age << endl;
//}
//
//int main() {
//	Myclass s2;
//	Myclass s1(1, "원천지재", 31);
//	s1.getData();
//	s1.setName("홍길동");
//	s1.setAge(25);
//	s1.setId(999);
//
//	cout << " ========== 바꾼후 ========== " << endl;
//	s1.getData();
//
//	return 0;
//}