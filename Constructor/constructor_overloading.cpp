#include <iostream>
using namespace std;
class Rect{
   public:
   int area;
   Rect()
   {
   	area = 0;
   }
   Rect(int a, int b)
   {
        area = a * b;
   }
   void display()
   {
        cout << "The area is: " << area << endl;
   }
};
int main(){
	Rect r1;
	Rect r2(2, 6);
        r1.display();
        r2.display();
}
