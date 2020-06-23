#include<stdio.h>
void hanoi(int n,int source,int dest,int auxillary)
{
	if(n==1)
	{
		printf("Move %d disk from %d to %d\n",n,source,dest);
		return;
	}
	hanoi(n-1,source,auxillary,dest);
	printf("Move %d disk from %d to %d\n",n,source,dest);
	hanoi(n-1,auxillary,dest,source);
}
int main()
{
	int n;
	printf("Enter the value of n :  ");
	scanf("%d",&n);
	hanoi(n,1,3,2);
	
	return 0;
}
