#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b,c;
        cin>>a>>b;
        int max_len=max(a.size(),b.size());
        for(int i=0;i<max_len;i++){
            if(i<a.size()) c=c+a[i];
            if(i<b.size()) c=c+b[i]; 
        }
        cout<<c<<endl;
    }
}
