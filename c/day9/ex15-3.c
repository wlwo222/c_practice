//#include <stdio.h>
//
//void print_str (char** pps, int cnt);
//
//int main()
//{
//	// 포인터배열 
//	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
//	int count;
//	
//	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
//	print_str(ptr_ary, count);
//	
//	return 0;
//}
//
///* 
//	포인터 배열의 주소값을 받은 후 for문으로 loop 
//	char** pps는 변수인지, 배열인지 알지 못한다.
//	따라서, 변수 앞에 *와 소괄호로 감싸서 표현한다. 
//	char 1차원 배열을 가리키는 포인터. char*( *pps)
//*/ 
//void print_str (char*(* pps), int cnt)
//{
//	int i;
//	
//	for (i = 0; i < cnt; i++)
//	{
//		// pps[i] 는 char 타입 주소 값 이다. (char*)
//		printf("%s\n", pps[i]);
//	}
//}
