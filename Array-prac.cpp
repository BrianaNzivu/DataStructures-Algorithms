#include<iostream>
using namespace std;
int main() {
	int i, n;
	int myArray[100];
	
	cout<<"Enter the number of values:";
	
	cin>>n;
	
	cout<<"Enter the values:";
	
	for(i=0; i<n; i++)
	{
		
	cin>>myArray[i];
		
	}
	cout<<"Your values are: "<<endl;
	
	for(i=0; i<n; i++)
	{
		
		cout<<myArray[i]<<" ";
		
	}
	
}
