#include <stdio.h>

// 주소값으로 입력을 받는 경우 변수 생략하여 함수선언이 안됨 
void swap(int a, int b);

void main()
{
	int a = 10, b = 20;
	printf("a : %d, b : %d \n", a, b);
	printf("a의 주소값 : %d, b의 주소값 : %d \n", &a, &b);
	
	swap(&a, &b);
	printf("a : %d, b : %d \n", a, b);
}

// 주소값을 입력으로 받는다. 
void swap(int a, int b)
{
	// a값 임시 저장할 변수 
	int temp = a;
	a = b;
	b = temp;
}
