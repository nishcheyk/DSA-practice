
#include<iostream>
using namespace std;
int LinearSearch(int a[],int num,int n){
    for (int  i = 0; i < n; i++)
    {
            return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4};
    cout<<LinearSearch(arr,4,4);
}