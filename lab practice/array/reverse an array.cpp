#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
  int arr[n],j=n-1;

for (int k = 0; k < n; k++)
{
 cin>>arr[k];
}

for (int i = 0; i < n/2; i++)
{if (i!=j)
{
    int temp=arr[i];

    arr[i]=arr[j];
    arr[j]=temp;
    j--;
}
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
}