#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<60) cout<<n<<" segundo(s)"<<endl;
        else if(n<3600) cout<<n/60<<" minuto(s) e "<<n%60<<" segundo(s)"<<endl;
        else cout<<n/3600<<" hora(s), "<<(n%3600)/60<<" minuto(s) e "<<n%60<<" segundo(s)"<<endl;
    }
}
