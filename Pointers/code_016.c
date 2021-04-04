#include<stdio.h>

int printer(int r)
{
	printf("The result is : %d\n", r);
}

int adder(int a, int b, int (*ptr)())
{
	int c = a+b;
	ptr(c);
}

int main() 
{
	int (*p)(int) = printer;
	adder(3,2,p);
	return 0;
}
