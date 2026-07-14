//#include <stdio.h>
//
//void input_ary(double *pa, int size);
//double find_max(double *pa, int size);
//
//int main()
//{
//	const int ARY_SIZE = 5;
//	double ary[ARY_SIZE], max;
//	input_ary(ary, ARY_SIZE);
//	printf("배열의 최댓값 : %.1lf\n", find_max(ary, ARY_SIZE)); 
//	
//	return 0;
//}
//
//void input_ary(double *pa, int size)
//{
//	int i;
//	printf("%d개의 실수 값 입력 : ", size);
//	
//	for (i = 0; i < size; i++)
//	{
//		scanf("%lf", pa + i);
//	}
//}
//
//double find_max(double *pa, int size)
//{
//	double max = pa[0];
//	int i;
//	
//	for (i = 1; i < size; i++)
//	{
//		max = max > pa[i] ? max : pa[i];
//	}
//	
//	return max;	
//}
