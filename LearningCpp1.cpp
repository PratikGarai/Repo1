#include<iostream>
#include<stdio.h>
#include<string.h>
#define EXC '!'
#include<conio.h>
using namespace std;
void print_pointer(int *k); //print() does not have print_pointer() defined before it
struct Book{
	int pages;
	char author[10];
	float price;
};
typedef struct
{
	int element1;
	int element2;
} collection ;
void print(int v)
{
	cout<<"In the method print()"<<endl;
	cout<<"The value of x: "<<v<<endl;
	print_pointer(&v);
}
void print_pointer(int *d)
{
	cout<<"Printing through pointer: "<<*d<<endl;
}
void fill_book(struct Book *b1, struct Book *b2)
{
	strcpy(b1->author,"Author 1");
	b1->price =123.50;
	b1->pages =300;
	strcpy(b2->author,"Author 2");
	b2->price =129.50;
	b2->pages =375;
}
void fill_collection(collection *co1, collection *co2)
{
	co1->element1=50;
	co1->element2=100;
	co2->element1=45;
	co2->element2=90;
}
void create_structs()
{
	struct Book book1;
	struct Book book2;
	fill_book(&book1,&book2);
	collection col1;
	collection col2;
	fill_collection(&col1,&col2);
	//checking for reference type
	printf("%s\n",book1.author);
	printf("%d\n",col1.element1);
}
int main()
{
	bool c =true;
	int x;
	cout<<"\a\a\a";
	cin>>x;
	print(x);
	cout<<"Hello World!!"<<EXC<<endl;
	cout<<c<<"\t\a\a\a"<<!c<<"\b\b"<<"c"<<endl;
	create_structs();
	//clrscr(0);		//From conio
	return 0;
}


