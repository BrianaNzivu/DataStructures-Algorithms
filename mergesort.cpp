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

void merge (int arr[], int low, int mid, int high)
{
	i = low;
	j = mid + 1;
	int temp[high - low + 1];
	int k = low;
	
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
//Dropping remaining elements from left array
	while(i<=mid)
	{
		temp[k] = arr[i];
			i++;
			k++;
		
	}
//Dropping remaining elements from right array	
	while(j<=high)
	{
		temp[k] = arr[j];
			j++;
			k++;
		
	}
//Copy the elements from temp array to original array
	for(k=low; k<=high; k++)
	{
		arr[k] = temp[k];
	}
}

void mergesort(int arr[], int low, int high)
{
	if(low<high)
	{
		int mid = (low + high)/2;
		mergesort (arr, low, mid);
		mergesort (arr, mid+1, high);
		merge (arr, low, mid, high);
	}
}

int main()
{
	getValues();
	cout<<"\n unsorted values: ";
	display();
	mergesort(array, 0, n-1);
	cout<<"\n sorted values: ";
	display();
}
