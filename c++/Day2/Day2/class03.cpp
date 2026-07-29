//#include <iostream>
//#include <string.h>
//
//class Human {
//private:
//	char name[20] = "하하하";
//	int age;
//	char job[20];
//
//public:
//	// const를 안붙이는 경우, 변수를 따로 선언하고 넣어줘야함
//	//void setData(char* sname, int sage, char* sjob) {
//	void setData(const char* sname, int sage, const char* sjob) {
//		strcpy_s(name, sname);
//		age = sage;
//		strcpy_s(job, sjob);
//	}
//ｓｆｓｆｓｆｓｆ
//	void showData() {
//		printf("이름 : %s \n", name);
//		printf("나이 : %d \n", age);
//		printf("직업 : %s \n", job);
//	}
//};
//
//int main()
//{
//	Human a;
//
//	// 함수의 매개변수에 const 키워드가 붙지 않은경우 변수를 따로 선언해서 입력해줘야한다.
//	// 하지만 const가 붙은경우 상수로 입력할 수 있다. 
//	//char name[20] = "원천지재";
//	//char job[20] = "교육생";
//	a.setData("원천지재", 31, "교육생");
//	a.showData();
//
//	return 0;
//}