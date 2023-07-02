#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n;
    cout<<"enter no";
    cin>>n;
    for (int  i = 0; i < 10; i++)
    {
        if(arr[i]==n){
            for (int j = i; i < 10; j++)
            {
                arr[j]=arr[j+1];
            }

        }
    }
for (int i = 0; i < 9; i++)
{
    cout<<arr[i];
}

}