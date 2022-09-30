#include<iostream>
#define size 50
using namespace std;
class stack{
	int top;
	int array[size];
	public:
		stack()
		{
			top = -1;
		
		}
		bool full()
		{
			if(top == size -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool empty()
		{
			if(top == -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void push(int item)
		{
			if(full())
			{
				cout<<"Stack overflow";
				return;
			}
			else
			{
				top++;
				array[top] = item;
			}
		}
		int peek()
		{
			if(empty ())
			{
				cout<<"Stack underflow";
				return 0;
			}
			else
			{
				int item = array[top];
				return item;
			}
		}
		int pop()
		{
			if(empty ())
			{
				cout<<"Stack underflow";
				return 0;
			}
			else
			{
				int item = array[top];
				top --;
				return item;
			}
		}
		
		void display()
		{
			while(top!= -1)
			{
				cout<<pop();
			}
		}
			
};

int main()
{
stack s;
int i, n, item;
cout<<"How many values: ";
cin>>n;
cout<<"Enter values";
for (i=0; i<n; i++)
{
	cin>>item;
	s.push(item);
}
cout<<"\nvalue at the top: "<<s.peek();
cout<<"\nRemove value at the top: "<<s.pop();
cout<<endl;
s.display();
}
