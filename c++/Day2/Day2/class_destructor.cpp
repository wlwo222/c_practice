//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char* name;
//	int age;
//
//public:
//
//	Person(const char* myName, int myAge) {
//		int len = strlen(myName) + 1;
//		name = new char[len];
//		strcpy(name, myName);
//		age = myAge;
//
//		cout << "called constructor ! " << endl;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//
//	~Person() {
//		delete[] name;
//		cout << "called destructor ! " << endl;
//	}
//};
//
//int main()
//{
//	Person man1("Lee dong woo", 29);
//	Person man2("Jang dong gun", 41);
//
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}