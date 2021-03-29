#include<stdio.h>

int main()
{
	int a = 1025;
	// 00000000 00000000 00000100 0000001 : 1025
	
	int *p = &a;
	printf("%d\n", p); 		// address of a
	printf("%d\n", *p); 		// value of a
	printf("%d\n", p+1); 		// address of a + 4
	printf("%d\n", *(p+1)); 	// some garbage value

	char *c = (char*)p; 		// typecasting
	printf("%d\n", c); 		// address of a
	printf("%d\n", *c); 		// 1 ; the size of char is 1 byte; So last byte of a => 1
	printf("%d\n", c+1); 		// address of a+1 ; as char is of size 1
	printf("%d\n", *(c+1));  	// next byte of a => 00000100 => 4		

	return 0;
}
