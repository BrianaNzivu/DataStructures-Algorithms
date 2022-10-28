#include<iostream>
using namespace std;

int factorial (int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	return n*factorial (n-1);
}
int main()
{
	int n;
	cout<<"Enter a positive value";
	cin>>n;
	cout<<n<<"Factorial is" << factorial(n);
}
