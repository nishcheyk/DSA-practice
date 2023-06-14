#include<iostream>
using namespace std;
int arrayTraverse(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout<<"\n"<<arr[i];
    
    
}
int main(){
    int arr[]={1,2,3,4};
    arrayTraverse(arr,4);
}