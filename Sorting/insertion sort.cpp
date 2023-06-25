#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE SIZE OF ARRAY";
    cin >> n;
    int arr[n];
    cout << "enter the values";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];}

//insertion sort
 for (int i = 0; i < n; i++)
 {  int j=i-1;
        int key=arr[i];

    while (arr[j]>key && j>=0)
    {
         arr[j+1] = arr[j];
            j = j - 1;
    }
    arr[j+ 1]=key;

 }
 for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

}