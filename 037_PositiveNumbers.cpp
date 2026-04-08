#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    for(int i=0;i<6;i++){
        double n;
        cin>>n;
        if(n > 0){
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
}