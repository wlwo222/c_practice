//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	int age;
//	char name[20];
//
//public:
//	Person(const char* myName, int myAge) : age(myAge) {
//		strcpy_s(name, myName);
//	}
//	void WhatYourName() const {
//		cout << "My name is " << name << endl;
//	}
//	void HowOldAreYou() const {
//		cout << "I'm " << age << "years old !" << endl;
//	}
//};
//
//class UnivStudent : public Person {
//private:
//	char major[50];
//
//public:
//	UnivStudent(const char* myName, int myAge, const char* myMajor) 
//		: Person(myName, myAge)
//	{
//		strcpy_s(major, myMajor);
//	}
//	void WhoAreYou() const {
//		WhatYourName();
//		HowOldAreYou();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//
//int main() {
//	UnivStudent ust1("Lee", 22, "Computer eng. ");
//	ust1.WhoAreYou();
//
//	UnivStudent ust2("Won", 31, "Economic. ");
//	ust2.WhoAreYou();
//
//	return 0;
//}