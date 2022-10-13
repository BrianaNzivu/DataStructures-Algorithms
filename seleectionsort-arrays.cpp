#include<iostream>
using namespace std;

int i, j, n;
int myArray[100];

//Get Value from user
void getValues()
{
	cout<<"How many values: ";
	cin>>n;
	cout<<"Enter the values: ";
	for(i=0; i<n; i++)
	{
		cin>>myArray[i];
	}
	
}

//Display Values
void display()
{
	for(i=0; i<n; i++)
	{
		cout<<myArray[i]<<" ";
	}
}

//Selection sort
void selectionSort()
{
	for(i=0; i<n; i++)
	{
	
	int minpos = i;
	
	for(j=i+1; j<n; j++)
	{
		if(myArray[j]<myArray[minpos])
		{
			minpos = j;
		}
		swap(myArray[minpos],myArray[i]);
	}
	}
}

//main function
int main()
{
	getValues();
	cout<<"Your original values are: ";
	display();
	cout<<"\nYour sorted values are: ";
	selectionSort();
	display();
}
