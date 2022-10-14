#include<iostream>
using namespace std;

int i, j, n;
int myArray[100];

//Get values for users
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

//display values
void display()
{
	for(i=0; i<n; i++)
	{
	cout<<myArray[i]<<" ";	
	}
}

//Bubble Sort
void bubbleSort()
{
	for(i=0; i<n; i++)
	
	{
		for(j=0; j<n-1; j++)
		{
			if(myArray[j]> myArray[j + 1])
			{
				swap(myArray[j], myArray[j + 1]);
			}
			
		}
	}
}

int main()
{
	getValues();
	cout<<"\nOriginal unsorted values: ";
	display();
	bubbleSort();
	cout<<"\nYour sorted values are: ";
	display();
}
