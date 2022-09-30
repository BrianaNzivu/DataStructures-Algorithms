#include<iostream>
#define size 30
using namespace std;
class queue{
	int rear, front;
	int array[size];
	public:
		queue()
		{
			front = rear = -1;
		}
		void enqueue(int item)
		{
			if(rear == size-1)
			{
				cout<<"Queue overflow ";
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
		void dequeue()
		{
			if(front == -1)
			{
				cout<<"Queue underflow";
			}
			else
			{
				int item = array[front];
				front --;
				return;
			}
		}
		
		void display()
		{
			if(front != -1)
			{
				for(int i = front; i<=rear; i++)
				{
					cout<<array[i]<<" ";
				}
			}
			
			if(front == rear)
			{
				front = rear = -1;
			}
		}
};
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
		q.enqueue(item);
	}
	q.display();
}
