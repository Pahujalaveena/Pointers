#include<iostream>
using namespace std;
int Add(int a,int b)                                    //called function
{
	int c=a+b;
	return c;
}
int main()                                              //calling function
{
	int x=2,y=4;
	int c=Add(x,y);
	cout<<"The sum is "<<c<<endl;
}