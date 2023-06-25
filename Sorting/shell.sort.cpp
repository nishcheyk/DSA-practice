#include<iostream>
using namespace std;
void insertion( int *arr,int n){
    for (int i = 0; i < n; i++)
 {  int j=i-1;
        int key=arr[i];

    while (arr[j]>key && j>=0)
    {
         arr[j+1] = arr[j];
            j = j - 1;
    }
    arr[j+ 1]=key;

 }
}

void shell(int *arr,int n){

    for (int  i = n/2; i >1; i/2)
    {
        for (int j = i; j < n; j++)
        {
            insertion(&arr,i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[n]<<" ";
    }

}
int main() {
  int n;
  cout<<"enter the size of array";
  cin>>n;
  int arr[n];
  cout<<"enter the value of array";
  for(int i =0; i<n; i++){
    cin>>arr[i];
  }
  shell(&arr,n);
}