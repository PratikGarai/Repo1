#include<stdio.h>

int sum(int a[], int l)
{
	int s=0, i;
	for(i=0;i<l;i++)
	{
		s += *(a+i);
	}

	return s;
}

int main()
{
	int a[] = {2,6,7,4,5,9,1,-5};
	printf("%d\n", sum(a, sizeof(a)/sizeof(int)));

	return 0;
}
