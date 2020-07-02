#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	cout<<"Enter two no.=";
	cin>>a>>b;
	swap(a,b);
	return 0;
}
void swap(int c,int d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
	cout<<"After Swapping ="<<c<<" "<<d<<endl;
}
