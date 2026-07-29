//#include <iostream>
//using namespace std;
//
//// . 과 -> 둘 다 멤버 접근 연산자이다.
//// this 연산자를 쓸 경우 이것은 포인터이기때문에 -> 를 활용한다.
//
//class Engine {
//private:
//	
//public:
//	Engine() {
//		cout << " 마력 엔진 생성" << endl;
//	}
//
//	Engine(int hp) {
//		cout << hp << " 마력 엔진 생성" << endl;
//	}
//
//	void Broom() {
//		cout << "부릉부릉!!" << endl;
//	}
//	
//};
//
//class Car {
//private:
//	Engine engine;
//	Car(int a) : engine(a) {
//		cout << "새로운 자동차 생성" << endl;
//	}
//
//public:
//	// 객체 멤버일 때 초기화하기.
//	Car(): engine(200) {
//		cout << "자동차 생성" << endl;
//		engine.Broom();
//	}
//
//	static Car madeCar(int a) {
//		return Car(a);
//	}
//};
//
//int main()
//{
//	Car a;
//	Car b = Car::madeCar(50);
//
//	return 0;
//}