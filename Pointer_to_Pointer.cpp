#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int *p=&x;
	*p=6;
	int** q=&p;
	int*** r=&q;
	
	cout<<"*p ="<<*p<<endl;
	
	cout<<"*q ="<<*q<<endl;
	
	cout<<"*(*q) ="<<*(*q)<<endl;
	
	cout<<"*(*r) ="<<*(*r)<<endl;
	
	cout<<"*(*(*r)) ="<<*(*(*r))<<endl;
}