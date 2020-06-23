#include<stdio.h>
int main()
{
	long long int n,sum,l1=-1,l2=-1;
	scanf("%llu",&n);
	sum = n*(n+1)/2;
	if(sum%2!=0)
		printf("NO\n");
	else
	{
		printf("YES\n");
		sum = sum/2;
		long long int arr1[n];
		long long int arr2[n];
		for(int i=n;i>=1;i--)
		{
			if(sum>=i)
			{
				sum -= i;
				l1++;
				arr1[l1] = i;
			}
			else
			{
				l2++;
				arr2[l2] = i;
			}
		}
		printf("%llu\n",(l1+1));
		for(int i=l1;i>=0;i--)
		{
			printf("%llu ",arr1[i]);
		}
		printf("\n");
		printf("%llu\n",(l2+1));
		for(int i=l2;i>=0;i--)
		{
			printf("%llu ",arr2[i]);
		}
		printf("\n");
	}
	
	return 0;
}
