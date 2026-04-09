#include<bits/stdc++.h>
using namespace std;
int main(){
    string dia;
    int d1,d2,h1,m1,s1,h2,m2,s2;
    char c;
    cin>>dia>>d1>>h1>>c>>m1>>c>>s1;
    cin>>dia>>d2>>h2>>c>>m2>>c>>s2;

    int total1=d1*86400+h1*3600+m1*60+s1;
    int total2=d2*86400+h2*3600+m2*60+s2;
    int diff=total2-total1;

    int days=diff/86400; diff%=86400;
    int hours=diff/3600; diff%=3600;
    int mins=diff/60;
    int secs=diff%60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",days,hours,mins,secs);
}