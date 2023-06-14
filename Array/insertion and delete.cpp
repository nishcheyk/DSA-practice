#include<iostream>
using namespace std;
int insert(int a[],int num,int posit,int n){
     for (int i = n-1; i >posit; i--)
{
    a[i+1]=a[i];
    a[posit]=num;
    n++;
}
}
int delet(int a[],int posit,int n){
    int temp =a[posit];
    for (int i = posit; i <n; i++)
    {
        a[i]=a[i+1];
        n--;
    }
    return temp;

}

int main(){
    int arr[]={1,2,3,4};
    cout<<"before insertion \n";

    for (int i = 0; i < 4; i++)
    {
        cout <<arr[i];
    }
    cout<<"\n";
    insert(arr,10,2,4);
    cout<<"after insert/before delete\n";

    for (int i = 0; i < 4; i++)
    {
        cout <<arr[i];
    }

    cout<<"\n";
    delet(arr,2,3);
    cout<<"after delete";
    cout<<"\n";
     for (int i = 0; i < 3; i++)
    {
        cout<<arr[i];
    }


}