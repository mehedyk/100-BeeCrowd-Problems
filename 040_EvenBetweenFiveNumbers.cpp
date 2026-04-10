#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int counter=0;
    for(int i=0;i<5;i++){
        cin>>a;
        if(a%2==0) counter++;
    }
    cout<<counter<<" valores pares"<<endl;
}