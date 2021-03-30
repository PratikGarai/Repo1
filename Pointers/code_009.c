#include<stdio.h>
#include<string.h>

int main()
{
	// a simple character in single quotes
	char ch = 'a';

	// a string defined element by element
	char c[8];
	c[0] = 'J';
	c[1] = 'o';
	c[2] = 'h';
	c[3] = 'n';

	// gives garbage after n as it is not null terminated
	printf("%s\n", c);

	c[4] = '\0';
	// now all good as it is null terminated
	printf("%s\n", c);


	// second type of declaration , using double quotes
	char b[6] = "Hello";
	printf("%s\n", b);

	return 0;
}
