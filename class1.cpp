#include<iostream>
using namespace std;
class Student{
	public:
	int id;
	string name;
};
int main()
{
	Student s1;
	s1.id=64;
	s1.name="Swap";
	cout<<s1.id<<endl;
	cout<<s1.name<<endl;
	return 0;
}
