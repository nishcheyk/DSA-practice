#include<iostream>
using namespace std;

void darrays(){
    int n,m,l,k;
    cout <<"enter size of  first matrix";
    cin>>n>>m;

     cout <<"enter size of second 2d array";
    cin>>l>>k;

    //if conditon to chek if even matrix can be multipiled or not
    if(m==l){
            int arr1[n][m];
            int arr2[l][k];
            int final[m][l];

        cout <<"enter the values of first array in row major format";

        for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           cin>> arr1[i][j];
       }
    }

        // value input of second matrix
    cout <<"enter the values of second array in row major format";

    for (int i = 0; i < l; i++)
    {
       for (int j = 0; j < k; j++)
       {
           cin>> arr2[i][j];
       }
    }
;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            final[i][j]=0;/// starting value = 0 decalre kara ga ;
            //next loop row or coloum ki next value ko select karna ka liya jiska length hamri colum jitni hogi
            for (int p = 0; p<l; p++)
            {
            final [i][j]+=arr1[i][p]*arr2[p][j];
            }
        }

    }


    for (int i = 0; i < n; i++)
    {  cout<<" | ";
       for (int j = 0; j < l;j++)
       {
           cout<<final[i][j]<<" | ";
       }
        cout<<"\n";
    }

}
//if value are not equal;
else{
    cout<<" according to the size of array matirx can't be multiplied";
}
}


int main() {

    darrays();

}
