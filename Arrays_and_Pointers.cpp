#include<iostream>
using namespace std;
int main()
{
	int A[]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		cout<<"Address ="<<&A[i]<<endl;
		cout<<"Address ="<<A+i<<endl;
		cout<<"Value ="<<A[i]<<endl;
		cout<<"Value ="<<*(A+i)<<endl;
	}
}