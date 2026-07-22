//#include <stdio.h>
//#include <stdlib.h>
//
//int main ()
//{
//	int *pi;
//	double *pd;
//	
//	// int *로 형변환. int형 포인터 타입이기때문에. 
//	// (int *)생략가능, 근데 void 형태의 포인터이기때문에 형변환이 필요함. 
////	pi = (int *)malloc(sizeof(int));
//	pi = malloc(sizeof(int));
//	
//	// 메모리가 없는 경우 NULL 또는 0으로 반환받음. 
//	if (pi == NULL)
//	{
//		printf("# 메모리가 부족합니다. \n");
//		// 프로그램 종료 
//		exit(1);
//	} else {
//		printf("할당받은 메모리 주소는 %d 입니다. \n", pi);
//	} 
//	
//	pd = (double *)malloc(sizeof(double));
//	
//	*pi = 10;
//	*pd = 3.4;
//	
//	printf("정수형으로 사용 : %d\n", *pi);
//	printf("실수형으로 사용 : %.1lf\n", *pd);
//	
//	// 동적 할당 영역 반환 
//	free(pi);
//	free(pd);
//	
//	return 0;
//}
