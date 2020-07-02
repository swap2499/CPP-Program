/*A friend class is a class that can access the private and protected members of a class in which it is declared as friend.*/

/*It is a class used with a friend keyword to access the private members of another class.*/

#include <iostream>
using namespace std;
class XYZ{
	private:
   		char ch='A';
   		int num = 11;
	public:
   		friend class ABC;
};
class ABC{
	public:
   		void disp(XYZ obj1)
   		{
      			cout<<obj1.ch<<endl;
      			cout<<obj1.num<<endl;
   		}
};
int main()
{
	ABC obj1;
	XYZ obj2;
	obj1.disp(obj2);
	return 0;
}
