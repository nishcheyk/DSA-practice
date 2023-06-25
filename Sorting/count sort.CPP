#include<iostream>
using namespace std;
 void counting(int arr[],int n){
    int numa[9];
    for (int i = 0; i < 9; i++)
    {   int count=0;
        for (int j = 0; j < n; j++)
        {
            if (i==arr[j])
            {
                count++;
            }

        }
        numa[i]=count;

    }

int i=0, j=0;
for (int i = 0; i < n;i++)
{while (j<n)
{

  while (i!=numa[i])
  {
    arr[i]==numa[j];
    i++;
  }
}

}

  for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
 }

int main(){

    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the values";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    counting(arr,n);
}