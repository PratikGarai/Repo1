#include<stdio.h>

void increment(int a)
{
	a = a+1;
	printf("In increment() : %d\n", a);
}

void pointerIncrement(int *a)
{
	(*a)++;
	printf("In pointerIncrement() : %d\n", *a);
}

int main()
{
	int a = 10;
	printf("Before increment() : %d\n", a);
	increment(a);
	printf("After increment() :%d\n", a);
	printf("\nBefore pointerIncrement() : %d\n", a);
	pointerIncrement(&a);
	printf("After pointerIncrement() : %d\n", a);

	return 0;
}
