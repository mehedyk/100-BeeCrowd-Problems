#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    double a=0;
    for(int i=0;i<6;i++){
        cin>>a;
        if(a>=0) count++;
    }
    cout<<count<<" valores positivos"<<endl;
}
