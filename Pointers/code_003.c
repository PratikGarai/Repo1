#include<stdio.h>

int main() 
{
	int a = 10;
	int *p = &a;

	printf("%d\n", p);
	printf("%d\n", p+1);    
	printf("%d\n", sizeof(int));
	// returns (p+4), because p is an integer, 
	// so it covers 4 bytes in storage. p+1 
	// essentially points to the next variables's
	// location. So it moves forward by 4.
	
	double b = 10.0;
	double *q = &b;

	printf("%d\n", q);
	printf("%d\n", q+1);    
	printf("%d\n", sizeof(double));
	printf("%f\n", *(q+1));

	char c = 'b';
	char *r = &c;

	printf("%d\n", r);
	printf("%d\n", r+1);    
	printf("%d\n", sizeof(char));

	return 0;
}
