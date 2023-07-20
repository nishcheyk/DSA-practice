void push()
if(top=>n){
    cput<<"overflow";
}else{
    top++;
    stack[top]=data;
}
void pop(){
    if(top<=0){
        cout<<"underflow";
    }
    else{
        top--;

    }
}

InsertAtFirst(node *&head,int data){
    node*temp=new node(data);
    temp->prev=NULL;
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }head=temp;

}
void insert at random(node*&head,int data,int target){
    node* current=head;
    while(current!=NULL){
        if(current->data=target){
            node*temp=new node(data);
            temp->prev=current;
            temp->next=current->next;
            if(current->next!=NULL){
                current->next->prev=temp;
            }
            current->next=temp;
            return;
        }
        current=current->next;
    }
}
void reverse(node *&head){
    node* prev=NULL;
    node*current=head;
    node*next=current->next;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        current->prev=next;
        prev=current;
        current=next;
    }
    head= prev;
}