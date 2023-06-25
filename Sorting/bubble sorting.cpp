 // in this we take the campare the  fist element if it large  we will swap it with next and do it till end of array and larest element get at last
// time complexity O(N2)

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
        cin >> arr[i];
    }

    // bubble sort
    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}