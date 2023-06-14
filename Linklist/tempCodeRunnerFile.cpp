#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;}
        
};
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
}int main(){
node* head =NULL;
insertafront(head,5);
insertafront(head,2);
insertafront(head,5);
insertafront(head,2);
insertafront(head,5);
insertafront(head,2);
print(head);
}