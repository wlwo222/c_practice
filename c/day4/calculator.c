//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	char operator1, c;
//	
//	printf("계산기 프로그램입니다. \n");
//	printf("두 정수를 입력하세요. : \n");
//	scanf("%d%d", &a, &b);
//	
//	printf("계산식을 입력하세요. \n");
//	scanf(" %c", &operator1);
//	
//	/* if */
//	
//	if (operator1 == '/')
//	{
//		printf("a / b를 한 값은 %.1lf 입니다. \n", (double) a / (double) b);
//		printf("a / b를 한 몫은 %d 입니다. \n", a / b);
//		printf("a / b를 한 나머지는 %d 입니다. \n", a % b);
//	}
//	else if (operator1 == '*')
//	{
//		printf("a * b를 한 값은 %d 입니다. \n", a * b);
//	}
//	else if (operator1 == '+')
//	{
//		printf("a + b를 한 값은 %d 입니다. \n", a + b);
//	}
//	else if (operator1 == '-')
//	{
//		printf("a - b를 한 값은 %d 입니다. \n", a - b);
//	}
//	else 
//	{
//		printf("%c는 유효하지 않은 문자입니다. \n", operator1);
//	}
//	/* switch */
//	
////	switch(operator1)
////	{
////		case '/':
////			printf("a / b를 한 몫은 %d 입니다. \n", a / b);
////			printf("a / b를 한 나머지는 %d 입니다. \n", a % b);
////			break;
////			
////		case '+':
////			printf("a + b를 한 값은 %d 입니다. \n", a + b);
////			break;
////			
////		case '-':
////			printf("a - b를 한 값은 %d 입니다. \n", a - b);
////			break;
////			
////		case '*':
////			printf("a * b를 한 값은 %d 입니다. \n", a * b);
////			break;
////		
////		default:
////			printf("%c는 유효하지 않은 문자입니다. \n", operator1);
////			break;
////	}
//	
//	return 0;
//}
