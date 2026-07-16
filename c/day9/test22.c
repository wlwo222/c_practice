//#include <stdio.h>
//
///*
//	
//*/
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("변수 a의 주소값 : %d, %d \n", &a, pa);
//	printf("포인터변수 pa += 1 : %d \n", pa + 1);
//	
//	int ary[] = {1, 2};
//	// 배열 포인터 선언하기 
//	// 1차원 배열을 가리키는 배열포인터 
//	int(* pary) = ary;				
//	printf("ary : %p, pary : %p\n", ary, pary);
//	// + 1을 하는경우 해당 자료형의 크기 만큼 주소값 이동 
//	printf("ary + 1 : %p, pary + 1 : %p\n", ary + 1, pary + 1);
//	
//	char ary2[] = {'a', 'b'};
//	// 1차원 char 배열을 가르키는 포인터 
//	char(* pary2) = ary2;
//	
//	printf("ary2 : %p, pary2 : %p\n", ary2, pary2);
//	// + 1을 하는경우 해당 자료형의 크기 만큼 주소값 이동 
//	printf("ary2 + 1 : %p, pary2 + 1 : %p\n", ary2 + 1, pary2 + 1);
//	
//	int ary3[2][3] = {{1, 2, 3}, {4, 5, 6}};
//	// 포인터 기호와 변수명을 ()로 감싸서 포인터배열임을 표시 
//	int (*pary3)[3] = ary3;
//	printf("ary3 : %p, pary3 : %p\n", ary3, pary3);
//	// + 1을 하는경우 해당 자료형의 크기 만큼 주소값 이동 
//	// 이 때는 두 번째 행의 첫 배열 요소 주소값
//	// int 타입 방이 3개이기때문에 12 증가 
//	printf("ary3 + 1 : %p, pary3 + 1 : %p\n", ary3 + 1, pary3 + 1);
//	
//	// 문자열은 배열 한 칸당 8바이트 크기로 만든다. 
//	// 문자열을 가리키는 포인터 배열 
//	char* ary4[] = { "hiiiiigigigigigi", "good", "thanks"};
////	char (*pary4) = ary4;
//	// 
//	char *(*pary4) = ary4;
//	
//	printf("ary4 : %p, pary4 : %p\n", ary4, pary4);
//	printf("ary4 : %s, pary4 : %s\n", *ary4, *pary4);
//	printf("ary4 + 1 : %p, pary4 + 1 : %p\n", ary4 + 1, pary4 + 1);
//	printf("ary4 + 1 : %s, pary4 + 1 : %s\n", *(ary4 + 1), *(pary4 + 1));
//	printf("ary4 + 2 : %p, pary4 + 2 : %p\n", ary4 + 2, pary4 + 2);
//	printf("ary4 + 2 : %s, pary4 + 2 : %s\n", *(ary4 + 2), *(pary4 + 2));
//	
//	return 0;
//}
