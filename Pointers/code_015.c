#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}


int main()
{
	int (*p)(int, int), (*q)(int, int);
	p = &add;
	q = add;

	int c = (*p)(2,3);
	int d = (*q)(2,3);
	printf("2+3 = %d\n",c); 
	printf("2+3 = %d\n",d); 

	return 0;
}
