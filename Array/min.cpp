#include<iostream>
using namespace std;
int arraymin(int arr[],int n){
    int min=0;
    for (int i = 0; i < n; i++)
    if(arr[i]<arr[min])
        min=i;
    return arr[min];
 
}

int main(){
    int arr[]={23,43,5342,2,34};
    cout<<arraymin(arr,4);
}