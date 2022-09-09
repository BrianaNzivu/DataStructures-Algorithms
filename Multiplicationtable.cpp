// Testing a while loop
//Prepared by Briana
#include<iostream>
using namespace std;
int main ()
{
	int rows, cols;
	for(rows = 1; cols<=10; rows++)
	{
		for(cols = 1; cols <= 10; cols++)
		{
			cout<<"\t"<<rows*cols;
		}
		cout<<"\n";
	}
}
