#include<iostream>
using namespace std;
int queue[5],front=-1,rear=-1,n=5;
void enqueue(int data){
    if (rear==n-1)
    {
        cout<<"OVERFLOW";
    }
    else{
    if(front==-1&&rear==-1){
        front=0;
        rear=0;
    }
    else{
    rear=rear+1;
    }
    queue[rear]=data;
    }
}
void delte(){
    if (front==-1||front>rear)
    {
       cout<<"Queue underflow";
    }
    front++;
}
void display(){
    if(front==-1){
        cout<<"queue is empty";
    }
    else{
        cout<<front;
        cout<<"\n";
        cout<<"queue elements are";
        for (int i = front; i < rear; i++)
        {
            cout<<queue[i]<<" ";
        }
          cout<<"\n";
    }
}
int main() {
    display();
enqueue(8);
enqueue(2);
enqueue(9);
enqueue(3);
enqueue(4);
display();
delte();z
delte();
display();
delte();
delte();
delte();

display();


}
