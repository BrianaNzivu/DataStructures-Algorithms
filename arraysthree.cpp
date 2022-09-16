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
		cout<<"Original values are" <<endl;
	for(i=0; i<n; i++)
	{
		cout<<arrayName[i]<" ";
	}	
	int pos;
	cout<<"Enter the desired location where to delete";
	cin>>pos;
	
	//Shift
	for(i=pos; i<n; i++)
	{
		arrayName[i] = arrayName[i+1];
	}
	n--;
	cout<<"Current values are: ";
	for(i=0; i<n; i++)
	{
		cout<<arrayName[i]<" ";
	}
}
