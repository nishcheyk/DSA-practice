#include<iostream>
using namespace std;
int main(){

int it=0,jt=0,kt=0,n=4;

   for (int i = 1; i <= n; i++){
   it++;
for(int j = 1; j <= i; j++){
    jt++;

for(int k = 1; k <= j; k++){
    kt++;
}
}
   }
   cout<<it<<" "<<jt<<" "<<kt;
}
