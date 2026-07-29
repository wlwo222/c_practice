///* 생성자 */
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Human {
//private:
//	char name[20] = "하하하";
//	int age;
//	char job[20];
//
//public:
//	// 클래스 이름과 똑같은 멤버함수는 생성자이다. 이 때 출력은 없다. void도 아님.
//	// 객체를 생성하기 위해선 생성자가 필요하다.
//	Human(const char* sname, int sage, const char* sjob) {
//		strcpy_s(name, sname);
//		age = sage;
//		strcpy_s(job, sjob);
//	}
//
//	void showData() {
//		printf("이름 : %s \n", name);
//		printf("나이 : %d \n", age);
//		printf("직업 : %s \n", job);
//	}
//};
//
//int main()
//{
//	// 생성자, 함수를 호출하는 코드와 비슷하다. 
//	Human a("홍길동", 100, "백수");
//	// 구조체 변수로 선언할 순 있으나 객체지향을 위해 윗줄처럼 선언한다. (생성자를 통한 변수생성)
//	Human h1 = { "홍길동2세", 55, "사람" };
//	// 기본생성자 (default constructor)는 다른 생성자가 있는경우 없어짐.
//	//Human h2;
//
//	// 이 때는 h2가 함수로 처리된다. 왜냐면 함수표시인()로 끝났기 때문에, 함수선언문법
//	//Human h2();
//
//	a.showData();
//	h1.showData();
//	//h2.showData();
//
//	return 0;
//}
//
///*
//	생성자(constructor): 객체를 만들기 위해서 생성자가 호출되어야한다.
//*/