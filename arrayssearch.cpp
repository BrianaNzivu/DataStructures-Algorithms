// Working with arrays
//Prepared by Nzivu Briana

#include<iostream>
using namespace std;
int main()
{
	int arrayName [100];
	int i, n;
	cout<<"How many values ";
	cin>> n;
	cout<<"Enter values ";
	for(i=0; i<n; i++)
	{
		cin>>arrayName[i];
	}
		cout<<"Original values are " <<endl;
	for(i=0; i<n; i++)
	{
		cout<<arrayName[i]<" ";
	}	
	int searchkey;
	cout<<"Enter value to search";
	cin>>searchkey;
	
	for(i=0; i<n; i++)
	{
		if(searchkey==arrayName[i])
		{
			cout<<searchkey<<" has been found at location " <<i;
			break;
		}
	}
	if(i>=n)
	{
		cout<<searchkey<<" was not found ";
	}
}
