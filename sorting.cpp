// Working with arrays - Sorting an object using functions
//Prepared by Nzivu Briana

#include<iostream>
using namespace std;
int i, j, n;
int array[100];

void getValues(){
	cout<<"How many values do you have? ";
	cin>>n;
	cout<<"Enter the values: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
}

void display(){
	for(i=0; i<n; i++){
		cout<<array[i]<<' ';
	}
}

void selectionSort(){
	for(i=0; i<n; i++)
	{
		int minpos = i;
		for(j=i+1; j<n; j++)
		{
			if(array[j]<array[minpos])
			{
				minpos = j;
			}
		}
		swap(array[minpos],array[i]);
	}
}

int main(){
	getValues();
	cout<<"\noriginal unsorted values ";
	display();
	cout<<"\noriginal sorted values ";
	selectionSort();
	display();
}
