#include<iostream>
using namespace std;
class Parameterized{
	public:
	int a,b;
	Parameterized(int x, int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"A="<<a<<endl<<"B="<<b<<endl;
	}
};
int main()
{
	Parameterized p(10,20);
	p.display();
	return 0;
}

