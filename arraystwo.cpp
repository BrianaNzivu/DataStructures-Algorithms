// Working with arrays
//Prepared by Nzivu Briana

#include<iostream>
using namespace std;
int main()
{
	int arrayName [100];
	int i, n;
	cout<<"How many values:";
	cin>> n;
	cout<<"Enter values";
	for(i=0; i<n; i++)
	{
		cout<<arrayName[i]<<" ";
	}
	int pos;
	cout<<"Enter the desired location where to insert";
	cin>>pos;
	//Shift values strating from the last value upto desired position
	for(i=n-1; i>=pos; i--)
	{
		arrayName[i+1] = arrayName[i];
	}
	cout<<"Enter new value";
	cin>>arrayName[pos];
	
	n++;
	
	cout<<"\nCurrent values are:";
	for(i=0; i<n; i++)
	{
		cout<<arrayName[i]<<" ";
	}
}
