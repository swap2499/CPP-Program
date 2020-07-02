// Display with method
#include<iostream>
using namespace std;
class Student{
	public:
	int id;
	string name;
	void insert(int i,string n)
	{
		id=i;
		name=n;
	}
	void display()
	{
		cout<<" Id="<<id<<endl<<" Name="<<name<<endl;
	}
};
int main()
{
	Student s1;
	s1.insert(64,"Swap");
	s1.display();
	return 0;
}
