#include<iostream>
using namespace std;
int c;
int* Add(int* a,int* b)                                  //called function
{
	c=(*a)+(*b);
	return &c;
}
int main()                                              //calling function
{
	int x=2,y=4;
	int* ptr=Add(&x,&y);
	cout<<"The sum is "<<*ptr<<endl;
}