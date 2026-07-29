///* 얕은복사 */
//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* name, int age) {
//		cout << "constructor" << endl;
//		// 메모리 동적할당, heap 메모리 영역에 할당됨
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//
//	Person(const Person& other) {
//		cout << "copy constructor" << endl;
//		strcpy(name, other.name);
//		age = other.age;
//	}
//
//	void viewPerson()  const {
//		cout << "name: " << name << endl;
//		cout << "age: " << age << endl;
//	}
//
//	~Person() {
//		// 복사생성자를 얕은 복사 (주소값만 복사)를 한 경우, 문제가 된다.
//		// 복사된 객체가 사라지는 경우 원본객체의 데이터에 영향을 준다.
//		// 동일한 주소값을 갖고 있고, 그것을 반환하기 때문에
//		delete[] name;
//		cout << "called destructor " << endl;
//	}
//};
//
//int main()
//{
//	Person man("Jijae", 31);
//	Person man2(man);
//	Person copy{ man };
//
//	man.viewPerson();
//	man2.viewPerson();
//	copy.viewPerson();
//
//	return 0;
//}