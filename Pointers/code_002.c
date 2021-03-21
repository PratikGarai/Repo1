#include<stdio.h>

int main()
{
	int a=10, b=12;
	int *p = &a;
	
	printf("\nInitial\n");
	printf("a = %d, b = %d\n",a,b);

	*p = b;
	printf("\nAfter putting value of b in *p\n");
	printf("a = %d, b = %d\n",a,b);

	// change isn't reflected on a, as the 
	// previous statement only changed the 
	// value of *p or a, it did not bind it
	// to the value of b
	b = 20;
	printf("\nChanging value of b\n");
	printf("a = %d, b = %d\n",a,b);

	return 0;
}
