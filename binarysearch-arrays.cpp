#include<iostream>
using namespace std;

int main() {
	int i,n;
	int myArray[100];
	
	cout<<"How many values: ";
	
	cin>>n;
	
	cout<<"Enter values: ";
	for(i=0; i<n; i++)
	{
		cin>>myArray[i];
	}
	
	cout<<"Your values are:"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<myArray[i];
	}
	
	int searchkey;
	int mid;
	int high;
	int low;
	
	low = 0;
	high = n - 1;
	mid = low + high /2;
	
	while(true)
	{
		if(searchkey==myArray[mid])
		{
		cout<<"Value has been found at"<<mid;
		
		break;
		}
		else if(searchkey<myArray[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
		if(low>high)
		{
		cout<<"Value does not exist";
		break;	
		}
		
	}
}
