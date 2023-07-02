#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partion(int arr[],int low,int high){
	int temp;
	int pivot=arr[high];
	int i=(low-1);
	for(int j=low;j<=high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return(i+1);
	
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		quicksort(arr,low,partion(arr,low,high)-1);
		quicksort(arr,partion(arr,low,high)+1,high);
		
	}
}
void print(int arr[], int n)
{
for(int i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
}
int main(){
	int arr[]={10,5,8,1,7,3,3};
	
	int n=sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);
print(arr,n);
}


