//#include <stdio.h> 
//
//void local_func();
//void static_func();
//
//int main()
//{
//	int i;
//	
//	printf("일반 지역 변수(local)를 사용한 함수...\n");
//	
//	for(i = 0; i < 3; i++)
//	{
//		local_func();
//	}
//	
//	
//	printf("정적 지역 변수(static)를 사용한 함수...\n");
//	for(i = 0; i < 3; i++)
//	{
//		static_func();
//	}
//	
//	return 0;
//}
//
//void local_func()
//{
//	int a;
//	
//	a++;
//	printf("%d\n", a);
//}
//
//void static_func()
//{
//	static int a;
//	
//	a++;
//	printf("%d\n", a);
//}
