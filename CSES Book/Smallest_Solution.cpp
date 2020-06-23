#include<iostream>
using namespace std;
bool function(int x)
{
	return (x>10)?true:false;
}
int detector()
{
	int x = -1;
	int z = 35; //sufficiently high to be true
	for(int b=z;b>=1;b/=2)
	{
		while(!function(x+b)) x+=b;
	}
	return x+1;
}
int main()
{
	cout<<detector()<<"\n";
	
	return 0;
}
