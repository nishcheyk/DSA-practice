#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next,*prev;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void insert(node*& head,int data){
    node* n=new node(data);
    n->next=head;
    n->prev= NULL;
    head=n;
}

void reverse(node*&head){
     node* prev=NULL;
     node* current=head;
     node* next=NULL;
     while (current!=NULL)
     {
        next=current->next;
        current->next=prev;
        prev=current;
        current= next;
     }

}


void print(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ->";
        head=head->next;
    }

}

int main(){
node* head =NULL;
insert(head,10);
insert(head,20);
insert(head,30);
insert(head,40);
insert(head,50);
insert(head,60);
print(head);
cout<<" ";
reverse(head);
cout<<"\n";
print(head);
}