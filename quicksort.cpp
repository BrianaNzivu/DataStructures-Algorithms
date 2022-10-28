#include<iostream>
using namespace std;
int i, j, n;
int array [40];

void getValues()
{
	cout<<"How many values ";
	cin>>n;
	cout<<"Enter values ";
	for (i=0; i<n; i++)
	{
	cin>>array[i];	
	}
}

void display ()
{
	for (i=0; i<n; i++)
	{
		cout<<array[i]<<" ";
	}
}

int partition (int arr[], int low, int high)
{
	i = low;
	j = high;
	int pv = arr[low];
	
	while (i<j)
	{
		do
		{
			i++;
		}
		while(arr[i]<pv);
		
		do
		{
			j--;
		}
		while(arr[j]>pv);
		
		if(i<j)
		swap(arr[i], arr[j]);
		
	}
	
	swap(arr[j], arr[low]);
	return j;
}

void quicksort (int arr[], int low, int high)
{
	if(low<high)
	{
		int pv = partition(arr, low, high);
		quicksort (arr, low, pv);
		quicksort (arr, pv+1, high);
	}
}

int main()
{
	getValues();
	cout<<"Your unsorted values are: ";
	display();
	quicksort(array, 0, n);
	cout<<"Your sorted values are: ";
	display();
	
}
