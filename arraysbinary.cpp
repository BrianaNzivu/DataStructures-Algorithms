// Working with arrays binary search
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
	
int low, high, mid;
low = 0;
high = n-1;
for(i=low; i<=high; i++)
{
	mid = (low + high)/2;
	if(searchkey==arrayName[mid])
	{
		cout<<searchkey<<" has been found at location "<<mid;
		break;
	}
	else if(searchkey<arrayName[mid])
	{
		high = mid - 1;
	}
	else
	{
		low = mid + 1;
	}
	
	//Testing for element not found
	if(low>high)
	{
		cout<<searchkey<<" was not found ";
		break;
	}
}
}
