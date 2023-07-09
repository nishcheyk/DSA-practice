#include<iostream>
using namespace std;
void countingSort(int *a, int n){
 int max=0,i=0;
  while(i<=n){
        if (a[i]>max)
        {
           max=a[i];
        }
        i++;

    }


	int counting[max];
	int k = 0;
	for(int i = 0; i <=max; i++)
		counting[i] = 0;
	for(int i = 0; i < n; i++)
		counting[a[i]]++;
	for(int i = 0; i <=max; i++)
	{
		int count = counting[i];
		for(int j = 0; j < count; j++)
		{
			a[k] = i;
			k++;
		}
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

    countingSort(arr,n);

    for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}