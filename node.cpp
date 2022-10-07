#include<iostream>
using namespace std;
struct node{
string data;
node * next;
};

int main()
{
	node *node1 = new node ();
	node *node2 = new node ();
	node *node3 = new node ();
	
	node1 -> next = NULL;
	node2 -> next = NULL;
	node3 -> next = NULL;
	
	//add values
	node1 -> data = "Dalton";
	node2 -> data = "Mary";
	node3 -> data = "Alice";
	
	//create head and tail
	node *head = new node();
	node *tail = new node();
	head = NULL;
	tail = NULL;
	
	cout<<"Value for node: "<<node1 -> data;
	cout<<"\nAddress for node 1:"<<node1;
	
	//Linking nodes
	head = node3;
	tail = node2;
	
	node3 -> next = node1;
	node1 -> next = node2;
	
	cout<<head->data<<" "<<"\n";
//	cout<<tail->data<<" ";
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head -> next;
	}
	
}
