#include<iostream>
using namespace std;
int main(){
	int a=1025;
	int *p;
	p=&a;
	cout<<"Size of integer is "<<sizeof(int)<<endl;
	cout<<"Address ="<<p<<" ,value ="<<*p<<endl;
	cout<<"Address ="<<p+1<<" ,value ="<<*(p+1)<<endl;
	
	char *p0;
	p0=(char*)p;
	cout<<"Size of char is "<<sizeof(char)<<endl;
	cout<<"Address ="<<p0<<" ,value ="<<*p0<<endl;
	cout<<"Address ="<<p0+1<<" ,value ="<<*(p0+1)<<endl;
}