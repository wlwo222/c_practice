#include<iostream>
using namespace std;

class Human {
private:
	char name[20];
	int age;

public:
	Human(const char*, int);
	void getData();
};

Human::Human(const char* n, int a) {
	strcpy_s(this->name, n);
	age = a;
	cout << "부모 생성자 호출 " << endl;
}

void Human::getData() {
	cout << "name : " << this->name << "age : " << this->age << endl;
}

class Student : public Human {
private:
	int stID;

public:
	Student(const char*, int, int);
	void print();
};

// 멤버 이니셜라이즈를 통한 부모클래스 생성자 호출
// 생성자는 객체 생성하면서 초기화하는 기능이 있다.
Student::Student(const char* aname, int aage, int astID):
	Human(aname, aage), stID(astID)
{
	cout << "자식 생성자 호출 " << endl; 
}

void Student::print() {
	// 상속받았다고 해도 부모클래스의 private를 접근하지 못한다.
	//cout << "이름 : " << name << endl;
	cout << " 학번 : " << stID << endl;
}

int main() {
	Human a("홍길동", 12);
	a.getData();

	Student s("임꺽정", 50, 11);
	s.print();
	s.getData();
	return 0;
}