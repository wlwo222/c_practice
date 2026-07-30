//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//// 객체를 생성하면 cnt가 자동으로 증가한다.
//class Member {
//private:
//	static int cnt;
//	char name[20];
//	char phone[20];
//	char addr[20];
//
//public:
//	Member() { cnt++; }
//
//	Member(const char name[20], const char phone[20], const char addr[20]) {
//		strcpy_s(this->name, name);
//		strcpy_s(this->phone, phone);
//		strcpy_s(this->addr, addr);
//		cnt++; 
//	}
//
//	void print() {
//		cout << "name : " << name << endl;
//		cout << "phone : " << phone << endl;
//		cout << "addr : " << addr << endl;
//	}
//
//	static void getCnt() {
//		cout << "cnt : " << cnt << endl;
//	}
//};
//
//int Member::cnt = 0;
//
//int main() {
//	Member m1("홍길동", "0101010", "천안");
//	m1.print();
//	Member::getCnt();
//
//	Member m2("홍길동2", "010101045", "평택");
//	m2.print();
//	Member::getCnt();
//
//	return 0;
//}