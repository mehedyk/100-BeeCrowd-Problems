#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    double sum=0,a;
    for(int i=0;i<6;i++){
        cin>>a;
        if(a>0){count++;sum+=a;}
    }
    cout<<count<<" valores positivos"<<endl;
    printf("%.1f\n",sum/count);
}