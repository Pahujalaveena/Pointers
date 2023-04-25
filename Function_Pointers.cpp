#include<iostream>
using namespace std;
int Add(int a,int b)
{
	return a+b;
}
void PrintHello()
{
	cout<<"Hello"<<endl;
}
void Hello_Print(char *name)
{
	cout<<"Hello "<<name<<endl;
}
int main()
{
	int c;
	int (*p)(int,int);
	p=Add;
//	c=(*p)(6,5);
	p(3,4);
//	cout<<"The sum is "<<c<<endl;
	
	void (*ptr)();
	ptr=PrintHello;
	ptr();
	
	void (*pt)(char*);
	pt=Hello_Print;
	pt("Tom");
}