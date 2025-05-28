#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    
    int sorted[3]={num1,num2,num3};
    sort(sorted,sorted+3);

    for(int i=0;i<3;i++){
        cout<<sorted[i]<<endl;
    }

    cout<<endl<<num1<<endl<<num2<<endl<<num3<<endl;
}
