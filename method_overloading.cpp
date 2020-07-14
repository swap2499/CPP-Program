#include<iostream>
using namespace std;
class Cal{
	public:
	int add(int a,int b)
	{
		return a+b; 
	}
	int add(int a,int b,int c)
	{
		return a+b+c; 
	}
};
int main()
{
	Cal c;
	cout<<c.add(5,10)<<endl;
	cout<<c.add(5,10,15)<<endl;
	return 0;
}
