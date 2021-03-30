#include<stdio.h>

int fun(int c[][2][2])
{
	return 0;
}

int func(int (*c)[2][2])
{
	return 0;
}

int main()
{
	int c[2][2][2] = { {{1,2}, {3,4}}, {{5,6}, {7,8}} };
	func(c);

	return 0;
}
