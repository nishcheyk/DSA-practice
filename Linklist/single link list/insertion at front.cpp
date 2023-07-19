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
void fun(struct node* start)
{
  if(start == NULL)
    return;
  printf("%d  ", start->data);

  if(start->next != NULL )
    fun(start->next->next);
  printf("%d  ", start->data);
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
insertafront(head,16);
insertafront(head,15);
insertafront(head,14);
insertafront(head,13);
insertafront(head,12);
insertafront(head,11);
fun(head);


}