#include<iostream>
using namespace std;
int main()
{
	int n,p,k;
	cin>>n>>p>>k;
	if(p-k>1)
		cout<<"<< ";
	for(int i=p-k;i<=p+k;i++)
	{
		if(i<1)
			continue;
		else if(i>n)
			break;
		else if(i==p)
			cout<<"("<<i<<")"<<" ";
		else
			cout<<i<<" ";
	}
	if(p+k<n)
		cout<<">>";
	cout<<"\n";

	return 0;
}
