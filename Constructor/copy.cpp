#include <iostream>  
using namespace std;  
class Copy{  
	public:  
        int x;  
        Copy(int a)                // parameterized constructor.  
        {  
        	x=a;  
        }  
        Copy(Copy &i)               // copy constructor  
        {  
            x = i.x;  
        }  
};  
int main()  
{ 
	Copy a1(20);               // Calling the parameterized constructor.  
        Copy a2(a1);                //  Calling the copy constructor.  
        cout<<a2.x<<endl;  
        return 0;  
}  
