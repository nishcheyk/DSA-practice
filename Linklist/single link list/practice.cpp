#include <iostream>
using namespace std;

int main() {
	int arr[3][3];
cin>>arr[2][2];
for (int i = 0; i < 3; i++)
{
    for ( int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];
    }
}

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; i++)
    {
      cout<<max(arr[i][j],arr[i+1][j],arr[i][j+1],arr[i+1][j+1]);
    }

}


	return 0;
}
