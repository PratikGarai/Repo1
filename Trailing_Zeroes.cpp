#include<stdio.h>
int main()
{
	long long int n,zeroes=0,i;
	scanf("%llu",&n);
	for(i=5; n/i>0;i*=5)
	{
		zeroes += n/i;
	}
	printf("%llu\n",zeroes);
	
	return 0;
}
