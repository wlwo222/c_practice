//#include <stdio.h> 
//
///*
//	덧셈, 뺄셈.. 사용할 함수 선언 
//*/
//
//int get_num();
//char get_expression();
//void sum(int, int);
//void sub(int, int);
//void mul(int, int);
//void div(int, int);
//void exception_of_input();
//
//int main()
//{
//	// 두 정수 입력받기 
//	int x = get_num();
//	int y = get_num();
//	
//	// 계산식 입력받기 
//	char expression = get_expression();
//	
//	switch(expression)
//	{
//		case '+': sum(x, y); break;
//		case '-': sub(x, y); break;
//		case '*': mul(x, y); break;
//		case '/': div(x, y); break;
//		// 예외처리 
//		default: exception_of_input(); break;
//	}
//	
//	return 0;
//}
//
//int get_num()
//{
//	int input;
//	
//	printf("계산할 정수를 입력하세요. \n");
//	scanf("%d", &input);
//	
//	return input;
//}
//
//char get_expression()
//{
//	char expression;
//	
//	printf("계산식을 입력하세요. \n");
//	scanf(" %c", &expression);	
//	
//	return expression;
//}
//
//void sum(int x, int y) { printf("두 정수를 합한 값은 %d 입니다.\n", x + y); }
//void sub(int x, int y) { printf("두 정수를 뺀 값은 %d 입니다.\n", x - y); }
//void mul(int x, int y) { printf("두 정수를 곱한 값은 %d 입니다.\n", x * y); }
//void div(int x, int y) { printf("두 정수를 나눈 값은 %.1lf 입니다.\n", (double) x / (double) y); }
//void exception_of_input() { printf("올바른 값을 입력해주세요."); }
