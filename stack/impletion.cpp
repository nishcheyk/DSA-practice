#include<iostream>
using namespace std;
int stack[8],n=8,top=-1;
void push(int data){
    if(top>=n-1){
        cout<<"OVERFLOW";
    }else{
        top++;
        stack[top]=data;
    }
}
void pop(){
    if(top<=-1){
        cout<<"uncderflow";
    }
    else{
        top--;
    }
}
void display(){
    if(top<=-1){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack elements are";
        for (int i = top; i >=0; i--)
        {
            cout <<stack[i]<<" ";
        }

    }
    cout<<"\n";
}
int main(){
push(5);
push(10);
display();
push(11);
push(12);
display();
cout<<"after del";
pop();
pop();
display();
pop();
pop();
displa();

}