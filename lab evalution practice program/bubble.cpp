#include<iostream>
using namespace std;
int main(){
	int arr[]={8,9,2,4,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}