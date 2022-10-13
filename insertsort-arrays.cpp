#include<iostream>
using namespace std;
int i, j, n;
int myArray[100];

//Get the values from user
void getValue()
{
	cout<<"How many values do you have? ";
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
	cout<<"Your values are: ";
	for(i=0; i<n; i++)
	{
		cout<<myArray[i]<<" ";
	}
}

//insert sort
void insertSort()
{
	for (i = 0; i < n; i++)
	{
		j=i;
		while(myArray[j]<myArray[j-1])
		{
			swap(myArray[j], myArray[j-1]);
			j--;
		}
	}
}


//main function
int main()
{
	getValue();
	cout<<"Your original values are: ";
	display();
	cout<<"\nYour sorted values are: ";
	insertSort();
	display();
}
