#include<stdio.h>
int main()
{
	long long int sum,y,x,sq;
	sum =0;
	int t;
	scanf("%d",&t);
	long long int res[t];
	for(int i=0;i<t;i++)
	{
		scanf("%llu %llu",&y,&x);
		sq = (y>x)?y:x;
		if(sq%2==0)
			sum =sq*sq - x - (sq-y) + 1;
		else
			sum = sq*sq - y - (sq-x) +1;
		res[i] = sum;
	}
	for(int i=0;i<t;i++)
	{
		printf("%llu\n",res[i]);
	}
	
	return 0;
}
