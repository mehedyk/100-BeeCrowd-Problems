#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,hour=0,minute=0;
    cin>>a>>b>>c>>d;
    if(a==c){
        if(b==d) hour=24;
        else if(b>d){
            hour=23;
            minute=60-b+d;
        }
        else if(b<d) minute=d-b;
    }
    else if(a>c){
        hour=24-a+c;
        if(b>d){
            hour--;
            minute=60-b+d;
        }
        else if(b<d) minute=d-b;
    }

    else if(c>a){
        hour=c-a;
        if(b>d){
            hour--;
            minute=60-b+d;
        }
        else if(b<d) minute=d-b;
    }

    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
}