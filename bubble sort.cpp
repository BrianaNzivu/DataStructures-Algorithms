// Working with arrays - Sorting using insert sort an object using functions
//Prepared by Nzivu Briana

#include<iostream>
using namespace std;
int i, j, n;
int array[100];

//Get values from user
void getValues(){
	cout<<"How many values do you have? ";
	cin>>n;
	cout<<"Enter the values: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
}

//Display array output
void display(){
	for(i=0; i<n; i++){
		cout<<array[i]<<' ';
	}
}

//Using the bubble sort method
void bubbleSort() {
	for(i=0; i<n; i++) 
	{
		for(j = 0; j<n-1; j++)
		{
			if(array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}
	

int main() 
{
	getValues();
	cout<<"\noriginal unsorted values ";
	display();
	cout<<"\n Sorted values with bubble sort ";
	bubbleSort();
	display();	

}
