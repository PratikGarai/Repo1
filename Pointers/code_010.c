#include<stdio.h>
#include<string.h>

int main()
{
	char b[] = "Hello";
	char* a = "Boy";
	char* c = "Hello";

	b[0] = 'b'; 		// this is ok
	// a[0] = 'b'; 		// this isn't, unsized string's 
				// index based operations not allowed

	printf("a : %s\n", a);
	printf("b : %s\n", b);
	printf("c : %s\n", c);

	printf("\nSizeof b : %d\n", sizeof(b));
	printf("Length of b : %d\n", strlen(b));

	printf("Strcmp(a,b) : %d\n", strcmp(a,b));
	printf("Strcmp(b,a) : %d\n", strcmp(b,a));
	printf("Strcmp(b,b) : %d\n", strcmp(b,b));


	//  char* d;   wrong
	char d[5]; 	// correct, to use strcpy, mention the size first 
	strcpy(d, a);
	printf("After strcpy(d,a) , d : %s\n", d);

	strcat(b,a);
	printf("After strcpy(b,a) , b : %s\n", b);

	return 0;
}
