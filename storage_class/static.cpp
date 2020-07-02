#include <iostream>
using namespace std;  
void function(void);
static int c = 5; // Global static variable
  
int main()
{
	while(c--)
	{
        	function();
        }
    	return 0;
}
void function( void )
{
	static int cnt = 2; 
        cnt++;
   	cout << "cnt is " <<cnt ;
   	cout << " and c is " <<c<<endl;
}

