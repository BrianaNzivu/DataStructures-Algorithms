// Testing values that does not return values
//Prepared by Nzivu Briana

#include<iostream>
using namespace std;
int a , b , sum;
void getValue()
{
cout<<"Enter two values";
cin>>a>>b;
}
void compute()
{
	sum = a + b;
}
void display ()
{
	cout<<a<<"+"<<b<<"="<<sum;
}
int main()
{
	getValue;
	compute;
	display;
	return 0;
}
