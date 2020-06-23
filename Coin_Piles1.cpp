#include<stdio.h>
int main()
{
	int t;
	long long int inp1,inp2,n1,n2,diff;
	scanf("%d",&t);
	int results[t];
	for(int i=0;i<t;i++)
	{
		scanf("%llu %llu",&inp1,&inp2);
		if(inp1<inp2)
		{
			n1 = inp1;
			n2 = inp2;
		}
		else
		{
			n1 = inp2;
			n2 = inp1;
		}
		diff = n2-n1;
		n1 = n1-diff;
		n2 = n2-diff*2;
		if(n1>=0 && n1%3==0)
		{
			results[i] = 1;
		}
		else
		{
			results[i] = 0;
		}
		
	}
	for(int i=0;i<t;i++)
	{
		if(results[i]==0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	
	return 0;
}
