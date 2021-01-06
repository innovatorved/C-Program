#include <stdio.h>

int main()
{
	printf("__BOOLEAN OPERATION__\n");

	int a , b;
	printf("Enter the Boolean value 1 : ");
	scanf("%d" , &a);

	printf("Enter the Boolean value 2 : ");
	scanf("%d" , &b);

	printf("\nAND operation : %d\n" , a&b);
	printf("\nOR operation : %d\n" , a|b);

	printf("\nNOT operation in %d : %d" , a,!a);
	printf("\nNOT operation in %d : %d" , b,!b);

	return 0;
}
