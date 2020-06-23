#include<iostream>
#include<string.h>
using namespace std;
class Sales;
class Salesperson
{
	int salepID;
	char name[25];
	public:
	void getter();
	void searcher(Sales all[], int sno, int sid);
	int  matcher(char nm[25], int id);
};
class Sales
{
	int dow,amount,salepID;
	public:
	void getter();
	friend class Salesperson;
};
void Sales::getter()
{
	cout<<"\nEnter Sales Person id \n";
	cin>>salepID;
	while(true)
	{
		cout<<"Enter date of week (1-7)\n";
		cin>>dow;
		if(dow>=1&&dow<=7)
			break;
		cout<<"Wrong date!!! \n";
	}
	cout<<"Enter amount \n";
	cin>>amount;												
}
void Salesperson::getter()
{	
	cout<<"Enter ID \n";
	cin>>salepID;						
	cout<<"Enter name \n";
	cin>>name;
}
void Salesperson::searcher(Sales all[], int sno, int sid)
{
	for(int i =0;i<sno;i++)
	{
		if(all[i].salepID==sid)
		{
			cout<<all[i].dow<<endl;
			cout<<all[i].amount<<endl;
		}
	}
}
Salesperson::matcher(char nm[25],int id)
{
	if((strcmp(this->name,nm))==0 && (id==this->salepID))
		return 1;
	return 0;
}
int getbyid(Salesperson a[],int id, char name[25], int sno)
{
	int found = -1;
	for(int i=0;i<sno;i++)
	{
		if(a[i].matcher(name,id)==1)
		{
			return i;
		}
	}
	return found;
}
int main()
{
	int m,n,id;
	char name[25];
	cout<<"Enter the number of sales \n";
	cin>>m;						
	cout<<"Enter the number of salesperson \n";
	cin>>n;	
	Sales sales[m];
	Salesperson sp[n];
	cout<<"Enter sales details\n";
	for(int i=0;i<m;i++)
		sales[i].getter();
	cout<<"\n\nEnter salesperson details\n";
	for(int i=0;i<n;i++)
		sp[i].getter();
	cout<<"\n\nEnter id to be searched\n";
	cin>>id;						
	cout<<"Enter name \n";
	cin>>name;
	int l = getbyid(sp,id,name,n);
	if(l==-1)
	{
		cout<<"\nSalesperson not found"<<endl;
	}
	else
	{
		cout<<"\nDetails: ";
		sp[l].searcher(sales,m,id);
	}

	return 0;
}
