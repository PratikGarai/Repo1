#include<stdio.h>

int main()
{
	int a[5] = {4,2,7,3,9};
	int l = sizeof(a)/sizeof(int);
	int i;

	for(i=0;i<l;i++)
	{
		printf("Value in *(a+%d) : %d\n", i,*(a+i));
	}

	return 0;
}
