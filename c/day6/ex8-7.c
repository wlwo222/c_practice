//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	// 문자열은 생성한 단계에서  초기값 세팅이 가능하다. 
//	char str[2] = "APPle155555555555555555555";
//	char str2[2] = "APPle155555555555555555555";
//	char ss = 'T';
//	int *strp, *strp2;
//	strp = str;
//	strp2 = str2;
//	int q = 515;
//	
//	/* 
//		문자열 변수 생성 후 값을 직접 넣는 방식은 안된다.
//		왜냐하면 배열명은 주소값이기 때문에 상수취급
//		즉, 상수 = 상수는 취급이기때문에 컴파일 중 오류가 발생함. 
//	*/
////	str = "APPle";
//	strcpy(str, "AAAABBBBBCCCCCCCCCc");
////	str[0] = 'A';
////	str[1] = 'P';
////	str[2] = 'P';
////	str[3] = 'L';
////	str[4] = 'E';
////	str[5] = 'd';
////	str[6] = '\t';
////	str[7] = 's';
////	str[8] = 't';
////	str[9] = 'q';
////	str[10] = '1';
////	str[11] = '5';
////	str[12] = 'h';
//	
//	/*
//		printf %s 변환문자는 널 문자열을 찾아가기때문에 
//		배열 메모리 크기가 넘어가더라도 찾을때까지 읽는다?
//		그런데 다른 변수의 메모리 주소까지 읽진 않는거같다.		
//	*/
//	printf("%s\n", str);
//	printf("str 사이즈 : %d\n", sizeof(str));
//	printf("str 주소 : %d\n", strp);
//	printf("str2 주소 : %d\n", strp2);
//	printf("변수 ss 주소 : %d\n", &ss);
//	printf("변수 q 주소 : %d\n", &q);
//	
//	return 0;
//}
