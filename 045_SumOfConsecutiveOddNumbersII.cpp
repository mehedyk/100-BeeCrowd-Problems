#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,in_counter=0,out_counter=0;
    cin>>t;
    while(t--){
        int i;
        cin>>i;
        if(i>=10 && i<=20) in_counter++;
        else out_counter++;
    }
    cout<<in_counter<<" in"<<endl;
    cout<<out_counter<<" out"<<endl;
}