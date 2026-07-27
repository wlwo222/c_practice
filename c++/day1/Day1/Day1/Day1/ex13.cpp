//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 레퍼런스는 포인터가 아닌 동일한 메모리 주소를 가지며 별칭(alias)을 선언하는것과 같다.
//	int num1 = 1020;
//	int &num2 = num1;	// 레퍼런스 선언
//	int &num3 = num2;
//	int num4 = 6666;
//
//	cout << "VAL : " << num1 << endl;
//	cout << "REF : " << num2 << endl;
//	num2 = num4;
//
//	cout << "VAL : " << &num1 << endl;
//	cout << "REF : " << &num2 << endl;
//	cout << "num 2 VAL : " << num2 << endl;
//	cout << "REF : " << &num3 << endl;
//
//	return 0;
//}