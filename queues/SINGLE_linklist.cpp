#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};
node* front= NULL;
node* rear= NULL;
node* temp= NULL;
int n=8;
void Insert(int val){
node* temp= new node(val);
    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
    }

void del(){
if (front==NULL){
    cout<<"OVERFLOW";
}
else
{   node* temp= front;

    if(front==rear)
    front=rear=NULL;
    else
    front=front->next;
    free(temp);
}
}

void Display() {
    temp=front;
    if((front==NULL)&& rear==NULL){
        cout<<"queue is empty";
        return;
    }
    cout<<"Queue elements are:";
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
int main() {
     Display();
    Insert(4);
    Display();
    Insert(6);
    Insert(8);
    Display();
    del();
    Display();

}