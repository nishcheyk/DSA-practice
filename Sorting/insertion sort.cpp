node
8 top=NULL;
void push(int data){
    node* n=new node(data);
    if(top==NULL){
        n->next=NULL;
    }
    else
    n->next=top;
    top=n;

}
void pop(){
    if(top==NULL){
        cout<<"Stack Underflow"<<endl;
    }
    node*temp=top;
    top=top->next;
    free(temp);
}
node* front=NULL;
node* rear=NULL;
node* temp=NULL;

void enque(int val){
    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
void deque() {
    if(front==NULL){
        cout<<"underflow";
    }
else{
    node* temp=front;
    if(front==rear){
        front=rear=NULL;
        else
        front=front->next;
        free(temp);
    }
}
}850