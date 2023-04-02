#include<iostream>
using namespace std;


void Increment(int *p)
{
	(*p)=(*p)+1;
}
int main()
{
	int a;
	a=10;
	Increment(&a);
	cout<<"a= "<<a<<endl;
}












//
//void Increment(int a)
//{
//	a=a+1;
//}
//int main()
//{
//	int a;
//	a=10;
//	Increment(a);
//	cout<<"a= "<<a<<endl;
//}