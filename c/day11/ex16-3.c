//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int *pi, num, i;
//	int size = 5;
//	int count = 0;
//	
//	pi = (int *)calloc(size, sizeof(int));
//	
//	while(1)
//	{
//		printf("양수만 입력하세요 => ");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int *)realloc(pi, size * sizeof(int));
//		}
//		pi[count++] = num;
//		printf("%d 번째 배열에 할당된 주소값은 %p 입니다.\n", count, &pi[count]);
//	}
//	
//	for (i = 0; i < count; i++)
//	{
//		printf("%8d", pi[i]);
//	}
//	
//	free(pi);
//	
//	return 0;
//}
