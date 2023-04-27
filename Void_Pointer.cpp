#include<iostream>
using namespace std;
int main(){
	
	
	int a=1025;
	int *p;
	p=&a;
	cout<<"Size of integer is "<<sizeof(int)<<endl;
	cout<<"Address ="<<p<<" ,value ="<<*p<<endl;
	cout<<"Address ="<<p+1<<" ,value ="<<*(p+1)<<endl;

	
	
	
	void *p0;
	p0=p;
	cout<<"Address ="<<p0<<endl;
}