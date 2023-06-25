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

void insertatfirst(node *&head,int data){
    new temp=new node(data);
    temp->prev=null;
    temp->next=head;
       if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
}
void insetatend(node*& head,int data){
    new temp=new node(data);
     if (*head == NULL) {
        *head = new_node;
        return;
    }
   while (last->next != NULL) {
       last = last->next;
   }
     last->next = temp;
     temp->prev=head
}

int main(){

}