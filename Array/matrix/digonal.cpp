
 #include<iostream>
 using namespace std;

 int main(){
    int i,j, a[4];
    cout<<"\n Enter element(row major):\n";
    for(i=0;i<4;i++){
        cin>>a[i];
    }cout<<"\nThe matrix is..\n";

    for(i=0;i<4;i++){
    {for(j=0;j<4;j++)
    if(i==j)
    cout<<" "<<a[i];
    else
    printf(" 0");}
    printf("\n");}
    
    }

 