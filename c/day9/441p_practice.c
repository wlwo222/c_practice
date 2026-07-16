//#include <stdio.h>
//
//int main()
//{
//	int i,j, total, all_total;
//	int board[6][5] = {
//		{1, 2, 3, 4, 5},
//		{6, 7, 8, 9, 10},
//		{11, 12, 13, 14, 15},
//		{16, 17, 18, 19, 20}
//	};
//	
//	for (i = 0; i < 4; i++)
//	{
//		total = 0;
//		for (j = 0; j < 5; j++)
//		{
//			total += board[i][j];
//			all_total += board[i][j];
//			if (j == 4)
//			{
//				board[i][j] = total;
//			}
//		}
//	}
//	
////	// ї­ 
////	for (i = 0; i < 6; i++)
////	{
////		total = 0;
////		// За 
////		for (j = 0; j < 5; j++)
////		{
////			total += board[j][i];
////			if (j == 4)
////			{
////				board[j][i] = total;
////			}
////		}
////	}
//	
//	board[6][6] = all_total;
//	
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 6; j++)
//		{
//			printf("%5d", board[i][j]);
//		}
//		printf("\n");
//	}
//	
//	
//	return 0;
//}
