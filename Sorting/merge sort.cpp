#include<iostream>
using namespace std;
void sortedmerge(int *arr,int l,int m,int r){
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    int larr[n1],rarr[n2];
    for(int i=0;i<n1;i++)
    {
        larr[i]=arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        rarr[j]=arr[m+1+j];
    }
    int j = 0;
    int i=0;
    int k=l;
 //merge both array;

 while(i<n1&&j<n2){
    if(larr[i]<=rarr[j]){
        arr[k++]=larr[i++];

    }
 else {
    arr[k++] = rarr[j++];
      }

 }//left over element
 while(i<n1){
    arr[k++]=larr[i++];
 }
 while(j<n2){
    arr[k++]=rarr[j++];
 }
 }

void mergesorting(int *arr,int l,int r){
if(l<r){
    int m=l+(r-1)/2;
    mergesorting(arr,l,m);
    mergesorting(arr,m+1,r);
    sortedmerge(arr,l,m,r);
}

}

int main (){
    int n=3;
    int arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before Sorting ";
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
cout<<endl;
mergesorting(arr,0,n-1);

    cout<<"array after sorting";

 for (int i = 0; i < n; i++)
    {}
        cout<<arr[i]<<" ";
    }

}