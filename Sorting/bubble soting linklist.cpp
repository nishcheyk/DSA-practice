#include<iostream>
using namespace std;

class Node{
    public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
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


void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

	cout << endl;
}
Node * Bubble_sort(Node *head){
if (head == NULL)
		return head;
    Node*temp=head;
        while (/* condition */)
        {
            /* code */
        }

}

int main(){

}