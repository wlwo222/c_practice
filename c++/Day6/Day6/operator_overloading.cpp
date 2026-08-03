///* 연산자 오버로딩 멤버 
//* 
//* 오버로딩의 종류
//
//멤버변수 연산자 오버로딩
//전역연산자 오버로딩 
//
//*/
//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int x, y;
//public:
//	Point(int a, int b) : x(a), y(b) {}
//	void showPoint() const{
//		cout << "Point x : " << x << " y : " << y <<endl;
//	}
//	// 멤버함수일 때 호출 시 이미 클래스 객체가 하나 있기 때문에 인수는 하나면 된다.
//	Point operator+(const Point& other) {
//		return Point(x + other.x, y + other.y);
//	}
//
//	Point operator-(const Point& other) {
//		return Point(x - other.x, y - other.y);
//	}
//
//	int operator*(const Point& other) {
//		return (x * other.x) + (y * other.y);
//	}
//};
//
//int main() {
//	Point p1(10, 20);
//	Point p2(20, 30);
//
//	p1.showPoint();
//	p2.showPoint();
//
//	Point p3 = p1+ p2;
//	p3.showPoint();
//
//	Point p4 = p3 - p2;
//	p4.showPoint();
//
//	cout << "p4 * p3 = " << p4 * p3 << endl;
//	return 0;
//}