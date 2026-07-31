//#include<iostream>
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() {
//		cout << "기본생성자" << endl;
//	}
//	void show() {
//		cout << "동적 할당 객체" << endl;
//	}
//	~MyClass() {
//		cout << "동적 할당 객체 업써짐" << endl;
//	}
//};
//
//int main() {
//	MyClass* ptr = nullptr;
//
//	if (ptr != nullptr) {
//		ptr->show();
//	}
//	else {
//		cout << "ptr is null " << endl;
//	}
//
//	ptr = new MyClass();
//	ptr->show();
//
//	delete ptr;
//	return 0;
//}