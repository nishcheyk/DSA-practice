#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void insertatfirst(node*&head,int data){
    node* temp= new node(data);

    if(head==NULL){
     temp->next=temp;
     head=temp;
     head->next=head;
    }
    else{
    node *temp1= head;
    temp->next=temp1;
    temp1->next=temp;
    head=temp;
    }

}
void printList(node* head)
{
    node* temp = head;

    // If linked list is not empty
    if (head != NULL) {

        // Print nodes till we reach first node again
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
}
int main(){
    node* head=NULL;
    insertatfirst(head,6);
    insertatfirst(head,1);
    insertatfirst(head,3);
    insertatfirst(head,2);
    insertatfirst(head,4);
    printList(head);
}