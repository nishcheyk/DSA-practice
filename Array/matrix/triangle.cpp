#include<iostream>
#define MAX 4


using namespace std;
int main(){
    int i,j,k=0,size=(4)*(4+1)/2,a[size];
    printf("\n Enter element(row major):\n");
    for(i=0;i<size;i++){
        cin>>a[i];
    }
        cout<<("\nThe upper triangular matrix is...\n");
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(i<=j){
                    cout<<a[k]<<" ";
                    k++;
                }
                else cout<<"0 ";
                }
                cout<<"\n";
            }
            //importanrt
            k=0;
     cout<<("\n the lower triangle matrix is ...\n");
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    if(i>=j){
                         cout<<a[k]<<" ";
                    k++;
                }
                else cout<<"0 ";
                }
                cout<<"\n";
            }
           

}
                
            
        


