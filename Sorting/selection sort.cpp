//in this we will select min from left and campare and exchange it with first digit
// time complexity O(n^2)



#include<iostream>
using namespace std;
int main() {
int arr[5],s=0;
cout<<"enter the value";
for (int i = 0; i <5; i++)
{
    cin>>arr[i];
}


for (int i = 0; i < 5; i++)
{   int min=i;
    for(int j=i;j<5;j++)
    {
    if (arr[min]>arr[j])
    {
    min=j;
    }}
    if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
}