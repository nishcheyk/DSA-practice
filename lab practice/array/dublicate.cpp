#include<iostream>
using namespace std;
void che(int arr[]){
int count=0;
for (int i = 0; i < 4-count; i++)
{
    for (int j = 1; j<4-count; j++)
    {
         if (arr[i]==arr[j])
         {
            if (i!=j)
            {
               for (int k = j; k < 3; k++)
               {


                    arr[k]=arr[k+1];


               }
            count++;
            }


         }

    }

}
for (int i = 0; i < 4-count; i++)
{
    cout<<arr[i]<<" ";
}

}
int main(){
    int arr[4],count=0;;
for (int i = 0; i < 4; i++)
{
 cin>>arr[i];
}
che(arr);


}