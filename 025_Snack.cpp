#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n==1){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<m*4.00<<endl;
    }
    else if(n==2){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<m*4.50<<endl;
    }
    else if(n==3){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<m*5.00<<endl;
    }
    else if(n==4){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<m*2.00<<endl;
    }
    else if(n==5){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<m*1.50<<endl;
    }
}