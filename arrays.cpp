// Working with arrays
//Prepared by Nzivu Briana

#include<iostream>
using namespace std;
int main()
{
int arrayName[100]	;
int i, n;
cout<<"How many values:";
cin>>n;
cout<<"Enter values";
for(i=0; i<n; i++)
{
	cin>>arrayName[i];
}
cout<<"Values are"<<endl;
for(i=0; i<n; i++)
{
	cout<<arrayName[i]<<" ";
}
}
