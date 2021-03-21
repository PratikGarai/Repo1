#include<stdio.h>

int main()
{
	int a;
	int *p;

	// notice order of initialization here,
	// p is assigned to a first, then a is assigned 10
	// still, *p returns 10, because p stores the address
	// so, whenever a changes, *p changes automatically
	p = &a;
	a = 10;

	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", &a);

	printf("\nChanging value through the pointer\n");
	printf("%d\n", a);
	*p = 12; 
	printf("%d\n", a);

	printf("\nChanging value through the variable and reading through pointer\n");
	printf("%d\n", *p);
	a = 14; 
	printf("%d\n", *p);

	return 0;
}
