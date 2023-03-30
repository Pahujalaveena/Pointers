#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	p=&a;
	
	cout<<"Address p is "<<p<<endl;
	cout<<"Value at address p is "<<*p<<endl;
	cout<<"Size of integer is "<<sizeof(int)<<" bytes"<<endl;
	cout<<"Address p+1 is "<<p+1<<endl;
	cout<<"values at address p+1 is "<<p+1<<endl;
}