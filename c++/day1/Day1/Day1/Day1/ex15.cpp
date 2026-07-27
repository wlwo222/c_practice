#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	// 포인터 변수 선언 및 num 변수주소 값 대입
	int* ptr = &num;

	// 이중포인터 변수 선언 및 ptr 변수 주소 값 대입
	// 포인터 변수의 주소값을 넣기 때문에 이중포인터
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << pref << endl;
	cout << dpref << endl;

	return 0;
}