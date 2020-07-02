/*If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.*/

/* It is a function used with a friend keyword to grant a non-member function access to the private members of a class.*/

#include <iostream>    
using namespace std;    
class Box    
{    
	private:    
	        int length;    
        public:    
    	        Box(): length(5){ }    
    	        friend int printLength(Box);     
};    
int printLength(Box b)    
{    
	b.length=b.length+10;    
        return b.length;    
}    
int main()    
{    
	Box b;    
        cout<<"Length of box: "<< printLength(b)<<endl;    
        return 0;    
}
