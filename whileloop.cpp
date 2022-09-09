// Testing a while loop
//Prepared by Briana
#include<iostream>
using namespace std;
int main ()
{
	int n = 1;
	cout<<"Number\tSquare\/tCubed\n";
	do
	{
		cout<<n<<"\t"<<n*n<<"\t"<<n*n*n<<"\n";
		n++;
	}	while (n <= 20);
}
