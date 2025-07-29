#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int e=((a+b+abs(a-b))/2);
    int d=((e+c+abs(e-c))/2);
    cout<<d<<" eh o maior"<<endl;
}
