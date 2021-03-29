#include<stdio.h>

int main()
{
	int x=5;
	int *p = &x;
	int **q = &p;

	printf("\nThrough x : \n");
	printf("Value of x : %d\n", x);

	printf("\nThrough p : \n");
	printf("Value of p / address of x : %d\n", p);
	printf("Value of x (*p) : %d\n", *p);

	printf("\nThrough q : \n");
	printf("Value of q / address of p : %d\n", q);
	printf("Value of p / address of x (*q): %d\n", *q);
	printf("Value of x (**q) : %d\n", **q);

	return 0;
}
