#include <stdio.h>

// 내가 만든 자료형은 구조체
// 그 구조체를 구성하는 것은 멤버 변수 
struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;	// 구조체 안에 또다른 구조체 멤버로 선언 
	int id;
	double grade;
	// 구조체를 선언한 부분에서 변수 초기화도 가능하다. 
} s2 = { { 31, 174.2}, 252, 3.5};

int main()
{
	struct student yuni;
	struct profile p1 = {17, 164.5};
	
//	yuni.pf.age = 17;
//	yuni.pf.height = 164.5;
//	yuni.pf = {17, 164.5}; // 이렇게 넣진 못한다. 
	yuni.pf = p1;
	yuni.id = 315;
	yuni.grade = 4.3;
	
	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);
	printf("yuni 변수 주소 : %p\n", &yuni);
	printf("yuni 변수 사이즈 : %d\n", sizeof(yuni));
	printf("yuni.id 변수 주소 : %p\n", &yuni.id);
	printf("yuni.id 변수 사이즈 : %d\n", sizeof(yuni.id));
	
//	printf("s2 나이 : %d\n", s2.pf.age);
//	printf("s2 키 : %.1lf\n", s2.pf.height);
//	printf("s2 학번 : %d\n", s2.id);
//	printf("s2 학점 : %.1lf\n", s2.grade);
	
	return 0;
}

