#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,temp,sum=0;
    cin>>i>>j;
    if(j<i){
      temp=j;
      j=i;
      i=temp;
    }
    for(int k=i+1;k<j;k++){
        if(k%2!=0) sum+=k;
    }
    cout<<sum<<endl;
}