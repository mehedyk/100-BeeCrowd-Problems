#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,result=0;
    cin>>a>>b;
    if(b<a) {
        a=24-a;
        result=a+b;
        cout<<"O JOGO DUROU "<<result<<" HORA(S)"<<endl;
    }
    else if(a==b){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
        return 0;
    }
    else if(a<b){
        result=b-a;
        cout<<"O JOGO DUROU "<<result<<" HORA(S)"<<endl;
    }
}