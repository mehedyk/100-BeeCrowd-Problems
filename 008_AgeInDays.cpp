#include<bits/stdc++.h>
using namespace std;
int main(){
    int days,year=0,month=0;
    cin>>days;

    if(days>=365) {
        year=days/365;
        days%=365;
        if(days>=30){
            month=days/30;
            days=days%30;
        }
    }
    else if(days>=30){
        month=days/30;
        days=days%30;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,days);
}
