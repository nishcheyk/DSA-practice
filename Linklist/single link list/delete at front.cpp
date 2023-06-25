#include<iostream>
using namespace std;
struct node
{
public:
int data;
node* next;
node(int d){
        data=d;
        next=NULL;}
};
void del(node*& head){

    if(head==NULL){
        cout<<"linklist is empty";
    }
    node *temp=head;
    head = head->next;
    free(temp);
}
void print(node* head){
    while (head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

void insertatfront(node*& head,int data){
    node* n= new node(data);
    n->next=head;
    head=n;
}

int main(){
node* head =NULL;
insertatfront(head,1);
insertatfront(head,2);
insertatfront(head,3);
insertatfront(head,4);
insertatfront(head,5);
insertatfront(head,6);
print(head);
cout<<"\n\n";
del(head);
del(head);

print(head);
}