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

//Using the selection sort method
void insertSort() {
	for(i=0; i<n; i++) 
	{
		j=i;
		while (array[j]<array[j-1])
		{
			swap(array[j], array[j - 1]);
			j--;
		}
	}
}
	

int main() 
{
	getValues();
	cout<<"\noriginal unsorted values ";
	display();
	cout<<"\n Sorted values with insert sort ";
	insertSort();
	display();	

}
