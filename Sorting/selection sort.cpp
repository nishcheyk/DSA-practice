//in this we will select min from left and campare and exchange it with first digit
// time complexity O(n^2)



#include<iostream>
using namespace std;
int main() {
int arr[5],s;
cout<<"enter the value";
for (int i = 0; i <5; i++)
{
    cin>>arr[i];
}


for (int i = 0; i < 5; i++)
{   int a=10000;
    for(int j=i;j<5;j++)
    {
    if (a>arr[j])
    {
    a=arr[j];
       s=j;
 }
    }
        int temp=arr[i];
        arr[i]=arr[s];
        arr[s]=temp;
}
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
}