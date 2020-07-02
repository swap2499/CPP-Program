#include <iostream> 
int x;
using namespace std; 
void autoStorageClass() 
{ 
	cout<<" Demonstrating auto class"<<endl; 
        int num = 32; 
 	cout<<" Value of the variable num declared as auto: "<<num<<endl;  
 
} 
void registerStorageClass() 
{ 
	cout<<" Demonstrating register classn"<<endl; 
   	register char c = 'G'; 
   	cout<<" Value of the variable c declared as register: "<<c<<endl; 
} 
int main() 
{ 
	autoStorageClass(); 
        registerStorageClass(); 
	return 0; 
}
