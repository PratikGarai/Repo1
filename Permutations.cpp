#include<stdio.h>
int main()
{
	long long int n,num;
	int odd=0;
	scanf("%llu",&n);
	if(n==1)
	{
		printf("1");
	}
	else if(n<4)
	{
		printf("NO SOLUTION");
	}
	else
	{
		if(n%2!=0)
		{
			n--;
			odd = 1;
		}
		num = (n-4)/2;
		for(int i=0;i<num;i++)
		{
			printf("%llu ",n);
			n = n-2;
		}
		printf("3 1 4 2 ");
		n= 5;
		for(int i=0;i<num;i++)
		{
			printf("%llu ",n);
			n = n+2;
		}
		if(odd==1)
		{
			printf("%llu",n);
		}
		printf("\n");
	}
	
	return 0;
}
