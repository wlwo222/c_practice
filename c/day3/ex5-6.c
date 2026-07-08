#include <stdio.h>

int main()
{
	int rank = 2, m = 0;
	
	// break 명령어는 반복문을 빠져나오게 하는 명령어이다. 
	switch (rank)
	{
		//rank가 1이라면.. 
		case 1:
			m = 300;
			break;
		
		//rank가 2라면..	
		case 2:
			m = 200;
			break;
		
		case 3:
			m = 100;
			break;
			
		//rank가 1, 2, 3이 다 아니라면 
		default:
			m = 10;
			break;
	}
	
	printf("m : %d\n", m);
	
	return 0;
}
