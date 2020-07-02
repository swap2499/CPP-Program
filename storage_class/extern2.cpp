#include <iostream>
using namespace std;
extern int cnt; 
void write_extern(void)
{
	cout<<"Count is "<<cnt<<endl;
}
// To run the program use 
// g++ main.cpp support.cpp -o write
// ./write
