//#include <iostream>
//using namespace std;
//
//int RefRetFuncTwo(int& ref) {
//	ref++;
//	return ref;
//}
//
//int main() {
//	int num1 = 1;
//
//	// 참조형으로 반환하나, 변수로 받으면 해당 변수에 리턴값을 반영한 채로 반환된다.
//	// 참조형으로 받으면 ref 주소가 가르키는 값으로 반환된다. (같은 변수)
//	//int num2 = RefRetFuncTwo(num1);
//	int num2 = RefRetFuncTwo(num1);
//
//	num1++;
//	num2 += 21;
//	cout << "num1 : " << num1 << endl;
//	cout << "num2 : " << num2 << endl;
//
//	return 0;
//}