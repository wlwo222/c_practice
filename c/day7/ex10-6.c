//#include <stdio.h>
//
//void print_ary(int *pa, int size);
//void print_char_ary(char *pa, int size);
//
//int main()
//{
//	int ary1[5] = { 10, 20, 30, 40, 50};
//	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70};
//	char ary3[5] = "ABC";
//	
//	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));
//	printf("\n");
//	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));
//	printf("\n");
//	print_char_ary(ary3, sizeof(ary3) / sizeof(ary3[0]));
//	
//	return 0;
//}
//
//void print_ary(int *pa, int size)
//{
//	int i;
//	
//	for (i = 0; i < size; i++)	
//	{
//		printf("%d, 林家蔼 : %d \n", pa[i], &pa[i]);
//	}
//}
//
//void print_char_ary(char *pa, int size)
//{
//	int i;
//	
//	for (i = 0; i < size; i++)	
//	{
//		printf("%c, 林家蔼 : %d \n", pa[i], &pa[i]);
//	}
//}
