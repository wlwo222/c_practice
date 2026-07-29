//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
// 
// // 자동으로 만들어주는건 생성자, 소멸자, 복사생성자
//
//class Person {
//private:
//	char* name;
//	int age;
//
//public:
//	Person(char* myname, int myage): age(myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//	}
//
//	Person() {
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//
//	void SetPersonInfo(char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char(len);
//		strcpy(name, myname);
//		age = myage;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//
//	~Person() {
//		delete[] name;
//		cout << "called destructor !" << endl;
//	}
//
//};
//
//int main() {
//	Person parr[3];
//
//	char namestr[100];
//	char* strptr;
//	int age, len; 
//
//	for (int i = 0; i < 3; i++) {
//		cout << "이름: ";
//		cin >> namestr;
//		cout << "나이: ";
//		cin >> age;
//
//		len = strlen(namestr) + 1;
//		strptr = new char[len];
//		strcpy(strptr, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//		/*Person newPerson(namestr, age);*/
//		parr[i].ShowPersonInfo();
//	}
//
//	return 0;
//}

//int main() {
//	int a;
//	double b = 3.14;
//	
//	// 컴파일러가 알아서 소수점 탈락시키고 변환
//	a = b;
//	return 0;
//}