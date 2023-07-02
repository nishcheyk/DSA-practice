#include<iostream>
using namespace std;
int main(){
    int arr[4], j=3;
for (int i = 0; i < 4; i++)
{
 cin>>arr[i];
}

for (int i = 0; i < j; i++)
{

         if (arr[i]==0)
         {
            arr[i]=arr[j];
            arr[j]=0;
            j--;
         }

}

for (int i = 0; i < 4; i++)
{
    cout<<arr[i]<<" ";
}

}