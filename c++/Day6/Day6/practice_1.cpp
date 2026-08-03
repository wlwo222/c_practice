//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//	int x, y;
//	friend ostream& operator<<(const ostream& os, const Point& p);
//
//public:
//	Point(int a = 10, int b = 10) : x(a), y(b) {}
//
//	void showPoint() {
//		cout << "x : " << this->x << "y : " << this->y << endl;
//	}
//	
//};
//
//// ostream은 출력스트림
//ostream& operator<<(ostream& os, Point& p) {
//	os << " ( " << p.x << ", " << p.y << " )";
//	return os;
//}
//
//int main() {
//	Point p5;
//
//	cout << "좌표 : " << p5 << endl;
//
//	return 0;
//}