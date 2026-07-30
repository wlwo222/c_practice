//#include <iostream>
//using namespace std;
//
//class sosimple {
//private:
//	int num;
//
//public:
//	sosimple(int n) : num(n) {}
//	sosimple(const sosimple& copy) : num(copy.num) {
//		cout << "called sosimple(const sosimple& copy) " << endl;
//	}
//	
//	void showdata() const {
//		cout << "num : " << num << endl;
//	}
//};
//
//void simplefuncobj(const sosimple& ob) {
//	ob.showdata();
//}
//
//int main() {
//	sosimple obj(7);
//	cout << "함수 호출 전 " << endl;
//	simplefuncobj(obj);
//	cout << "함수 호출 후 " << endl;
//
//	return 0;
//}