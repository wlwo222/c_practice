//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int x;
//	int y;
//	friend Point operator+(const Point& x, const Point& y);
//public:
//	Point(int a = 10, int b = 10): x(a), y(b) {}
//	Point(const Point& point) {
//		x = point.x;
//		y = point.y;
//	}
//
//	void showPoint() const {
//		cout << "Point ( x : " << x << " y :" << y << " ) " << endl;
//	}
//
//	Point add(const Point& other) {
//		return Point(x + other.x, y + other.y);
//	}
//
//	Point operator+(const int a) {
//		x += a; y += a;
//		return *this;
//	}
//
//	int getX() const { return x;}
//	int getY() const { return y;}
//};
//
//// 전역 연산자 오버로딩을 할 땐 프렌드로 지정해줘야한다.
//Point operator+(const Point& x, const Point& y) {
//	/*return Point(x.getX() + y.getX(), x.getY() + y.getY());*/
//	return Point(x.x + y.x, x.y + y.y);
//}
//
//int main() {
//	Point p1(10, 20);
//	Point p2(20, 30);
//
//	p1.showPoint();
//	p2.showPoint();
//
//	Point c;
//	// 대입연산자 호출
//	c = p1.add(p2);
//
//	Point p4 = p1 + p2;
//	p4.showPoint();
//	p1 = p1 + 100;
//	p1.showPoint();
//
//	return 0;
//}