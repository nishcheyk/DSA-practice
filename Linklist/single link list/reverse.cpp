#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		data = data;
		next = NULL;
	}
};


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
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
		cin >> data;
	}
	return head;
}
void printReverse(Node *head)
{   Node*current= head;
    Node* prev=NULL;
	Node*next=NULL;

	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	}
	return 0;
}