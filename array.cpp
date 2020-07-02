#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n;
	cout<<"Enter size of array :- ";
	cin>>n;
	cout<<"Enter array element :- ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"You entered array element is :- ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	return 0;
}
