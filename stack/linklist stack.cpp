#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};
node* top=NULL;
void push(int data )
{   node* n= new node(data);
    if(top==NULL){
        n->next=NULL;
    }
    else
        n->next=top;
    top=n;
}
void pop(){

    if(top==NULL)
    cout<<"\nunderflow\n";
    else{
        node* temp=top;
        top=temp->next;
        free (temp);
    }
}
void display(){
    if(top==NULL)
    cout<<"\nstack is empty";
    else{
        node* temp=top;
        cout<<"Stack: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<"--> ";
            temp=temp->next;
        }
        cout<<"NULL\n";

    }
    cout<<"\n";
}

int main(){

push(5);
push(10);
display();
push(11);
push(12);
display();
cout<<"after del";
pop();
pop();
display();
pop();
pop();
pop();
display();
}