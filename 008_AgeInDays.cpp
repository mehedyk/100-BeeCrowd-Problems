#include<bits/stdc++.h>
using namespace std;
int main(){
    int days,year=0,month=0,day=0;
    cin>>days;

    year=days/365;
    days=days%365;
    month=days/30;
    days=days%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,days);
}
