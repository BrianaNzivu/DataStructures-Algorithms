#include<iostream>
using namespace std;
struct node{
int data;
node * next;
};

class linkedlist{
node *head, *tail;
public:
	linkedlist()
	{
	head = NULL;
	tail = NULL;	
	}
	
	void getData (int item)
	{
		node *newnode = new node ();
		newnode -> data = item;
		newnode -> next = NULL;

		if (head == NULL)
		{
		head = newnode;
		tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;	
		}	
	}
	
	void display ()
	{
		node *temp = head;	
		while (temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
	
	void insertnewnode(int item)
	{
		node *newnode = new node();
		newnode -> data = item;
		newnode -> next = NULL;
		
		int pos;
		cout<<"Enter position where to insert ";
		cin>>pos;
		
		node *curr, *prev;
		curr = head;
		for(int i=1; i<pos; i++)
		{
			prev = curr;
			curr = curr->next;
		}
		if(head == curr)
		{
			newnode -> next = head;
			head = newnode;
		}
		else if (curr == tail)
		{
			tail->next=newnode;
			tail = newnode;
		}
		else
		{
			prev->next = newnode;
			newnode -> next = curr;
		}
	}
	
	void deletenode()
	{
		int pos;
		cout<<"Enter position  where to delete: ";
		cin>>pos;
		node *curr, *prev;
		curr = head;
		for(int i=1; i<pos; i++)
		{
			prev = curr;
			curr = curr->next;
		}
		if(head == curr)
		{
			head = head -> next;
		}
		else if (curr == tail)
		{
			prev->next= NULL;
			tail = prev;
		}
		else
		{
			prev->next = curr ->next;
		}
	}
		
};

int main()
{
	int i, n, item;
	linkedlist usiu;
	cout<<"How many values that you want to link";
	cin>>n;
	cout<<"Enter values";
	for(i=0; i<n; i++)
	{
		cin>>item;
		usiu.getData(item);
	}
	usiu.display();
	
	cout<<"Enter the value for the new node";
	cin>>item;
	
	usiu.insertnewnode(item);
	usiu.display();
}
