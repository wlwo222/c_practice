//#include <stdio.h>
//
//void swap_ptr(char**, char**);
//
//int main()
//{
//	// 각 포인터에 문자열 첫째 요소의 주소 저장 
//	char *pa = "success";
//	char *pb = "failure";
//	
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	
//	printf("&pa : %d\n", &pa);
//	// 포인터의 주소를 입력으로 넣음.
//	// 따라서, &pa 는 *pa의 주소, 즉 이중포인터이다. 
//	swap_ptr(&pa, &pb);
//	
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	
//	return 0;
//}
//
//// 포인터의 주소를 바꿔야 하므로 이중 포인터를 입력받음 
//void swap_ptr(char** ppa, char** ppb)
//{
//	// ppa 포인터 주소를 임시저장할 변수 선언 
//	char *pt;
//	pt = *ppa;
//	 
//	*ppa = *ppb;
//	*ppb = pt;	
//}
