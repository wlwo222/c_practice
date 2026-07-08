#include <stdio.h> 

int sum(int, int);
int sub(int, int);
int mul(int, int);
double div(int, int);

int main()
{
	int x, y;
	char expression;
	
	printf("계산할 두 정수를 입력하세요. \n");
	scanf("%d%d", &x, &y);
	
	printf("계산식을 입력하세요. \n");
	scanf(" %c", &expression);
	
	switch(expression)
	{
		case '+':
			printf("두 정수를 합한 값은 %d 입니다.\n", sum(x, y));
			break;
		
		case '-':
			printf("두 정수를 뺀 값은 %d 입니다.\n", sub(x, y));
			break;
		
		case '*':
			printf("두 정수를 곱한 값은 %d 입니다.\n", mul(x, y));
			break;
		
		case '/':
			printf("두 정수를 나눈 값은 %.1lf 입니다.\n", div(x, y));
			break;
			
		default:
			printf("올바른 값을 입력해주세요.");
			break;
	}
	
	return 0;
}

int sum(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
double div(int x, int y)
{
	return (double) x / (double) y;
}
