#include <iostream>
using namespace std;
int cnt;
extern void write_extern();
int main()
{
	cnt = 5;
	write_extern();
}
