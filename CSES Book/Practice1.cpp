//max subarray sum
#include<iostream>
using namespace std;
void line_by_line();
void in_one_line();
typedef signed long long int lli;
int main()
{
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			line_by_line();
			break;
		case 2:
			in_one_line();
			break;
		default:
			cout<<"Invalid choice"<<"\n";
	}
	return 0;
}
void line_by_line()
{
	lli n,s=0,e,m=0;
	cin>>n;
	for(lli i=0;i<n;i++)
	{
		cin>>e;
		s = e+s;
		s = s<0?0:s;
		m = s>m?s:m;
	}
	cout<<m;
}
void in_one_line()
{
	lli n,s=0,e,m=0,c=0;
	cin>>n;
	while(cin>>e)
	{
		s = e+s;
		s = s<0?0:s;
		m = s>m?s:m;
		c++;
		if(c==n)
			break;
	}
	cout<<m;
}
