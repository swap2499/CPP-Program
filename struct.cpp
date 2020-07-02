#include<iostream>
using namespace std;
struct Rectangle{
	int width,height;
	Rectangle(int w,int h)
	{
		width=w;
		height=h;
	}
	void Area()
	{
		cout<<"Area of Rectangle is :-"<<(width*height)<<endl;
	}
};
int main()
{
	struct Rectangle rec=Rectangle(6,7);
	rec.Area();
	return 0;
}

