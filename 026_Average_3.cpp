#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double avg=(a*2+b*3+c*4+d*1)/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    if(avg>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg<5.0){
        cout<<"Aluno reprovado."<<endl;
    }
    else{
        cout<<"Aluno em exame."<<endl;
        double e;
        cin>>e;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<e<<endl;
        double final_avg=(avg+e)/2;
        if(final_avg>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<final_avg<<endl;
    }
}