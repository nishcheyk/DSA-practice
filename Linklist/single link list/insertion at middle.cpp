#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;}
        
};

void insertmiddle(node* pr_node,int new_data){
    if(pr_node==NULL)
    {
        cout<<"the given previsous node canout be null";
        return;
    }
    node* n_node= new node(new_data);
    n_node->next=pr_node->next;
     pr_node->next = n_node; 
}

void insertafront(node*& head,int data){
    node* n=new node(data);
    n->next=head;
    head=n;
}
void print(node* head){
    while (head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}



int main(){
    node* head =NULL;
insertafront(head,5);
insertafront(head,2);
insertafront(head,5);
insertafront(head,2);
insertafront(head,5);
insertafront(head,2);

cout<<"before middle insert";
print(head);

insertmiddle(head->next,1);
cout<<"\nafter middle insert";
print(head);
}

