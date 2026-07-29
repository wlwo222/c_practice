//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		cout << "constructor" << endl;
//		strcpy_s(this->name, name);
//		this->age = age;
//	}
//
//	Person(const Person& other) {
//		cout << "copy constructor" << endl;
//		strcpy_s(name, other.name);
//		age = other.age;
//	}
//
//	void viewPerson()  const {
//		cout << "name: " << name << endl;
//		cout << "age: " << age << endl;
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