#include <stdio.h>

int main()
{
	int a = 5, b= 5;
	int pre, post;
	
	printf("증감 연산 전!!!! 초깃값 a = %d, b = %d\n", a, b);
	
	//전위형 증감연산자 먼저 증가시키고 그 값으로 계산 실행 
	pre = (++a) * 3;
	
	//후위형 증감연산자 계산 실행한 후, 값 증가 
	post = (b++) * 3;	
	
	printf("증감 연산 후 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);
	
	
	return 0;
}
