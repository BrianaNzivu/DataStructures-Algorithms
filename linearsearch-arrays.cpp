#include<iostream>
using namespace std;

int main() {
	int i,n;
	int myArray[100];
	
	cout<<"How many values:";
	
	cin>>n;
	
	cout<<"Enter values:";
	
	for(i=0;i<n; i++)
	{
		cin>>myArray[i];	
	}
	
	cout<<"Your original values are: ";
	
	for(i=0;i<n; i++)
	{
		cout<<myArray[i]<<" ";	
	}
	
	int searchkey;
	cout<<"Which value are you searching for";
	cin>>searchkey;
	
	for(i=0;i<n; i++)
	{
	 if(searchkey == myArray[i])
	 {
	  cout<<"Your value is found at position"<<i;
	  break;
	 }
	 
	 if(i>=n)
	 {
	 	cout<<"Search key does not exist";
	 }
	 
 	}
	
}
