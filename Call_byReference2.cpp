#include<iostream>
using namespace std;
//void Hello()
//{
//	cout<<"Hello World!"<<endl;
//}


int* Add(int* a,int* b)                                    //called function
{
	int c=(*a)+(*b);
	return &c;
}

int main()                                              //calling function
{
	int x=2,y=4;
	int* ptr=Add(&x,&y);
//	Hello();
	cout<<"The sum is "<<*ptr<<endl;
}