//Determine largets of numbers
//By Briana Nzivu
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, large;
	cout<<"Enter three numbers";
	cin>>a>>b>>c;
	if(a>b)
	{
		large = a;
	}
	else
	{
		large = b;
	
	}
	if(c>large)
	{
		large = c;
	}
cout << "The largest number is"<< large;
}
