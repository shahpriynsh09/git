#include <stdio.h>
int main()
{
	int x,y, total;
	
	printf("Enter any two numbers:");
	scanf("%d%d", &x, &y);
	
	//Add function.
	
	total = x + y;
	printf("Answer: %d", total);
		
	//sub function.	
	total = x - y;
	printf("Answer: %d", total);
	
	//multiply function.
	total = x * y;
	printf("Answer: %d", total);
	
	//divide function.
	total = x / y;
	printf("Answer: %d", total);
	
}
	