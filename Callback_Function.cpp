#include<iostream>
using namespace std;
void A()
{
	cout<<"Hello"<<endl;
}
void B(void (*ptr)())
{
	ptr();
}
int main()
{
	B(A);
}