#include<stdio.h>
int main()
{
	long long int results,n;
	scanf("%llu",&n);
	for(long long int i=1;i<=n;i++)
	{
		results = (i*i)*((i*i)-1)/2 - 4*(i-1)*(i-2);
		printf("%llu\n",results);
	}
	
	return 0;
}
