 ///*
//	inline 함수는 컴파일러에 의해 선언된다.
//	프로그래머가 inline으로 선언하여도 안될 수도 있고, 될수도 있다. (컴파일러 마음)
//
//	#define SQUARE(T x)
//	인라인 함수는 자료형에 대해 독립적이다.
//
//	SQUARE(5);
//	SQUARE(3.14);
//
//	입력 자료형이 int, double인 경우에 대해 각각 정의가 필요. 또는 template 선언
//
//	template <typename T>
//	inline T SQUARE(T x)
//	{
//		return x * x;
//	}
//*/
//
//#include <iostream>
//
//inline int SUQARE(int x)
//{
//	return x * x;
//}
//
//int main()
//{
//	// ::은 범위지정연산자
//	std::cout << SUQARE(5) << std::endl;
//	std::cout << SUQARE(12) << std::endl;
//
//	return 0;
//}