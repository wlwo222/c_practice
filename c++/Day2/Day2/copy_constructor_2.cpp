//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person {
//private:
//	char name[20];
//	int age;
//
//public:
//	Person(const char* name, int age): age(age) {
//		cout << "constructor " << endl;
//		strcpy_s(this->name, name);
//	}
//
//	void viewPerson() const {
//		cout << "name: " << this->name << ", " << "age: " << this->age << endl;
//	}
//};
//
//int main() {
//	Person hong("aa", 100);
//	Person p1 = hong;
//
//	hong.viewPerson();
//	p1.viewPerson();
//	
//
//	return 0;
//}