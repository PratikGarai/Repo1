#include<iostream>
using namespace std;
int main()
{
	int len;
	cin>>len;
	int a[len];
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	bool found = false;
	int l = len;
	while(l>0 && !found)
	{
		for(int beg=0;beg<len;beg+=l)
		{
			int ptr=beg+1;
			while(ptr!=beg+l && a[ptr-1]<=a[ptr])
				ptr++;
			if(ptr==beg+l)
			{
				found = true;
				break;
			}
		}
		if(found)
			break;
		l = l/2;
	}
	if(l==0)
		cout<<"1"<<endl;
	else
		cout<<l<<endl;


	return 0;
}
