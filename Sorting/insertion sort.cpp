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
 int i, j, tmp;
      for (i = 1; i < n; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            }
      }
 for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

}