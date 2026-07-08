//#include <stdio.h>
//
//int main() 
//{								// 0b는 바이너리임을 표현 
////	unsigned char uch = 0x7f;	//0b 0111 1111, 10진수로 177, 부호비트가 0 
////	char ch = 0x7f;					  7    f
//	
//	unsigned char uch = 0x9f;	// 0b 1001 1111 
//	char ch = 0x9f;				//    9    f
//	
//	// 부호비트를 사용하는경우 0xffff9f로 ch값이  나온다. 
//	printf("uch: %#x, ch: %#x", uch, ch);
//	
//	/*
//	C는 연산할 때 4바이트로 연산하기때문에 데이터 크기가 1바이트더라도 4바이트로 나오는것이고,
//	ffff로 나오는 이유는 앞 부호비트가 1이기때문에 앞에 있는 0이 전부 1로 변환되어 ffff9f로
//	나오는 것이다.
//	*/
//	
//	return 0;
//}
