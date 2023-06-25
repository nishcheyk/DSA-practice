#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node*next;
    node*prev;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
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
} node*temp=NULL;
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
            temp->prev->next=temp->next;
              }
            delete(temp);
            return;

            }
        }
    }

void insert(node *&head,int data){
    node* temp=new node(data);
    temp->prev=NULL;
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
}
void print(node * head){

    while (head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
     insert(head,3);
    insert(head,4);
     insert(head,5);
    insert(head,6);
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
    delanywhere(head,3);
    cout<<"\n";
    print(head);

}