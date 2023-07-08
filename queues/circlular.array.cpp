#include<iostream>
using namespace std;
int queue[8],n=8,front=-1 ,rear=-1;
void enqueue(int data){
    if(front==rear+1){
        cout<<"overflow";
    }
    else{
        if(front==-1){
            front=0;
        }
          rear++;
        queue[rear]=data;

    }
}
void dequeue(){
if ((front==rear)||(rear==-1))
{
    cout<<"underflow";
}
else{
    if(front==rear)
    front=rear=-1;
    else
    front++;
}
}

void display(){
    if(front==-1){
        cout<<"queue is empty";
        return;
    }
    else{

        cout<<"\n";
        cout<<"queue elements are: ";

        for (int i = front; i <=rear; i++)
        {
            cout<<queue[i]<<" ";
        }
          cout<<"\n";
    }
}
int main(){
display();
enqueue(5);
display();
enqueue(510);
display();
enqueue(2);
display();
enqueue(15);
display();
cout<<"after del";
dequeue();
display();
dequeue();
display();
dequeue();
display();
dequeue();
///display();

}