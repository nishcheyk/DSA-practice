#include<iostream>
using namespace std;
struct node
{
    public:
    int data;
    node* next,;
    node(int d){
        data=d;
        next=NULL;
    }
};
void insertatfront(node** head,int data){
    node* n= new node(data);
    n->next=*head;
    *head=n;
}
void del(node*& head){
    node* temp= head;
    head=head->next;
    free(temp);
}

void print(node* head){
    while (head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}


void reverse(node** head){
     node* prev=NULL;
     node* current=*head;
     node* next=NULL;
     while (current!=NULL)
     {
        next=current->next;
        current->next=prev;
        prev=current;
        current= next;
     }

}

int main(){

node* head =NULL;
insertatfront(&head,1);
insertatfront(&head,2);
insertatfront(&head,3);
insertatfront(&head,4);
insertatfront(&head,5);
insertatfront(&head,6);
print(head);
cout<<"\n\n";
reverse(&head);
print(head);

//del(head->next->next);


//del(head);
//print(head);
}