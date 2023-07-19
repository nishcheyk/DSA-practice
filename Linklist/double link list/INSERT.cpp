#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next,*prev;
    node(int d){
        data =d;
        next=NULL;
        prev=NULL;
    }
};

void InsertAtFirst(node *&head,int data){
    node* temp =new node(data);
    temp->prev=NULL;
    temp->next=head;
       if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
}
void InsertAtEnd(node*& head,int data){
    node* temp =new node(data);
    node* last = head;
     if (head == NULL) {
        head = temp;
        return;
    }
   while (last->next != NULL) {
       last = last->next;
   }
     last->next = temp;
     temp->prev=last;
}
void InsertAtrandom(node*& head,int data,int targetd){
 node* current =head;
 while(current!=NULL){
    if(current->data==targetd){
        node*temp=new node(data);
        temp->prev=current;
        temp->next=current->next;

        if(current->next!=NULL){
            current->next->prev=temp;
        }
        current->next=temp;
        return;
    }
    current=current->next;
 }
 if(current==NULL){
    cout<<"Target node with data "<< targetd<<" not found in the list "<<endl;
 }
}
void print(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<" NULL"<<endl;
}
void reverse(node*&head){
     node* prev=NULL;
     node* current=head;
     node* next=current->next;
     while (current!=NULL)
     {
        next=current->next;
        current->next=prev;
        current->prev=next;
        prev=current;
        current= next;
     }
 head=prev;
}

int main(){
node* head = NULL;
    InsertAtFirst(head, 10);
    InsertAtFirst(head, 20);
    InsertAtEnd(head, 30);

    InsertAtrandom(head,100,20);
     InsertAtrandom(head,1,30);
      InsertAtrandom(head,900,1000);
print(head);
cout<<"after revese"<<endl;
reverse(head);
print(head);
}