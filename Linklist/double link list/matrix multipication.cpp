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
int main() {
enqueue(8);
enqueue(2);
enqueue(9);
enqueue(3);
enqueue(4);

delte();
delte();

for (int i = front; i < rear+1; i++)
{
    cout<<queue[i]<<" ";
}

}