#include<iostream>
using namespace std;
int getlength(int a[],int l,int r)
{
	if(r-l<=1)
	{
		return 1;
	}
	else
	{
		int r1 = getlength(a,l,(int)((l+r)/2));
		int r2 = getlength(a,(int)((l+r)/2)+1,r);
		int ptr=l+1;
		while(ptr<r)
		{
			if(a[ptr-1]<=a[ptr])
				ptr++;
			else
				break;
		}
		if(ptr==r)
			return r-l;
		else
			return r1>r2?r1:r2;
	}
}
int main()
{
	int len;
	cin>>len;
	int a[len];
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	int result = getlength(a,0,len);
	cout<<result<<"\n";
	

	return 0;
}
