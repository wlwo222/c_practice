//#include <iostream>
//using namespace std;
//
//class Temporary {
//private:
//	int num;
//
//public:
//	Temporary(int n) : num(n) {
//		cout << "create obj : " << num << endl;
//	}
//
//	~Temporary() {
//		cout << "destroy obj : " << num << endl;
//	}
//
//	void ShowTempInfo() {
//		cout << "My num is  " << num << endl;
//	}
//};
//
//int main() {
//	// 이름 없는 객체, 임시 객체
//	Temporary(100);
//	cout << "********* after make ! " << endl << endl;
//
//	Temporary(200).ShowTempInfo();
//	cout << "********* after make ! " << endl << endl;
//
//	// 상수화 시키기 rvalue를 참조할 때 const
// // 우측값 참조(&&)를 통해 상수나 임시객체 참조 가능하다.
//	const Temporary& ref = Temporary(300);
//	cout << "********* end of main ! " << endl << endl;
//
//
//
//	return 0;
//}