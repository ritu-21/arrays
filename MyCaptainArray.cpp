#include<iostream>
using namespace std;
int main()
{
	int *p;
	int m;
	cout<<"Enter no. of elements in array:";
	cin >>m;
	int a[m];
	cout<<"\nEnter elements:";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	p =a;
	cout <<"You entered:";
	for(int i=0;i<m;i++)
	{
	cout<<*p<<"\n";
	p++;
}
return 0;
}
