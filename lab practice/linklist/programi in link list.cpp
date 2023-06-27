#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void insert(node*&head,int data){
    node* n=new node(data);
    n->next=head;
    head=n;
}
//size of array
void size(node* head){
    int count=0;
    while (head!=NULL)
    {
        count++;
        head=head->next;
    }
    cout<<"size of linklist "<<count;

}
//find program
void find(node* head,int key){
    int a=0;
     while (head!=NULL)
    {
        if(head->data==key){
            a=1;
            return;
        }
        head=head->next;
    }
    if (a==1)
    {
        cout<<"found";
    }
    else
        cout<<"notfound";

}

void update(node*&head,int r1,int r2){

    while (head->data!=r1)
    {
        head=head->next;
    }
   head->data=r2;
}
void del(node* head,int data){
    node* temp=new node(data);
    while (temp->data!=data)
    {
        temp=temp->next;
    }
    node* temp1= temp;
    temp=temp->next;
    free(temp1);
}
void print (node* head){
    while (head!=NULL)
    {
       cout<<head->data<<" ->";
       head=head->next;
    }

}
int main(){
    node *head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    cout<<"insert";
    print(head);
     cout<<"\n";
     cout<<"size";
    size(head);
    cout<<"\n";
    cout<<"found program\n";
    find(head,4);
    cout<<"\n";
    find(head,9);
    cout<<"\nupdate\n";
    update(head,6,10);

      print(head);
      cout<<"\ndelete\n";
    del(head,7);
    cout<<"\n";
    print(head);
}
