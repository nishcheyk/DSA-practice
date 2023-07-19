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

void dellast(node*&head){
  if (head == NULL) {
        return;
    } else if (head->next == NULL) {

        delete head;
        head = NULL;
        return;
    }
  node* temp=head;
  while (temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->prev->next=NULL;
  delete(temp);
}

void delfirst(node*&head){
if (head==NULL){
    return;
} node*temp=head;
head->next->prev=NULL;
head=head->next;
free(temp);
}

void delanywhere(node*& head,int d){
  if (head== NULL){
    return;
  }
     if (head->data == d) {
        // Special case: delete the first node
        node* temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        delete temp;
        return;
    }
   node* temp=head;
    while(temp->next!=NULL ){
        temp=temp->next;

        if (temp->data==d){
            if (temp->next != NULL)
            temp->next->prev=temp->prev;
              if (temp->prev != NULL){
            //temp->prev->next=temp->next;
              }
            delete(temp);
            return;

            }
        }
    }
void print(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<" NULL"<<endl;
    cout<<endl;
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
    cout<<"insert at first"<<endl;
    InsertAtFirst(head, 10);
    InsertAtFirst(head, 20);
    print(head);
    cout<<"insert at end"<<endl;
    InsertAtEnd(head, 30);
     InsertAtEnd(head, 40);
    print(head);

cout<<"Insert at random places"<<endl;
    InsertAtrandom(head,100,20);
     InsertAtrandom(head,90,40);
      InsertAtrandom(head,900,1000);
      cout<<"after all insertion and before reverse"<<endl;
print(head);

cout<<"after reverse"<<endl;
reverse(head);
print(head);
cout<<"\ndelete last node";
    dellast(head);
    cout<<"\n";
    print(head);
     cout<<"\ndelete first node";
    delfirst(head);
    cout<<"\n";
    print(head);
        cout<<"\ndelete any node";
    delanywhere(head,10);
    cout<<"\n";
    print(head);
}