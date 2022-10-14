#include<iostream>
#define size 30
using namespace std;

class queue{
	int front, rear;
	int array[size];
	
	public:
//Queue
		queue()
		{
			front = rear = -1;
		}
		
		void enqueue (int item)
		{
			if(rear == size-1)
			{
				cout<<"Queue overflow";
				return;
			}
			else
			{
				if(rear == -1)
				{
					rear ++;
					front ++;
					array[rear] = item;	
				}
				else
				{
					rear ++;
					array[rear] = item;
				}
			}
		}

//Dequeue		
		void dequeue (int item)
		{
			if(front == -1)
			{
				cout<<"Queue underflow";
				return;
			}
			else
			{
				int item = array[front];
				front --;
				return;
			}
		}

//Display values		
		void display()
		{
			if(front != -1)
			{
				for(int i = front; i<= rear; i++)
				{
					cout<<array[i]<" ";
				}
			}
		}
};

//Main function
int main()
{
	queue q;
	int i, n, item;
	cout<<"How many values: ";
	cin>>n;
	cout<<"Enter values: ";
	for(i=0; i<n; i++)
	{
		cin>>item;
		q.dequeue(item);
	}
	q.display();
}


