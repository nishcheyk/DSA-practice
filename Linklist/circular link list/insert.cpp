#include<iostream>
using namespace std;
struct node{
    int data
    node* next
    node(int d){
        data=d;
        next=NULL;
    }
}
void insertatfirst(node*&head,data){
    node* temp= new(data);

    if(head==NULL){
     temp->next=temp
     head=temp;
    }
    else
    node * temp1=head;
    temp-next=temp1;
    temp1->next=temp;
    head=temp;
    
}
