// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count100=0,count50=0,count20=0,count10=0,count5=0,count2=0,count1=0;
//     count100=n/100;
//     n=n%100;
//     count50=n/50;
//     n=n%50;
//     count20=n/20;
//     n=n%20;
//     count10=n/10;
//     n=n%10;
//     count5=n/5;
//     n=n%5;
//     count2=n/2;
//     n=n%2;
//     count1=n/1;
//     cout<<count100<<"\n"<<count50<<"\n"<<count20<<"\n"<<count10<<"\n"<<count5<<"\n"<<count2<<"\n"<<count1<<"\n";
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    int p=n/100; cout<<p<<" nota(s) de R$ 100,00"<<endl;
    n=n%100;
    p=n/50; cout<<p<<" nota(s) de R$ 50,00"<<endl;
    n=n%50;
    p=n/20; cout<<p<<" nota(s) de R$ 20,00"<<endl;
    n=n%20;
    p=n/10; cout<<p<<" nota(s) de R$ 10,00"<<endl;
    n=n%10;
    p=n/5; cout<<p<<" nota(s) de R$ 5,00"<<endl;
    n=n%5;
    p=n/2; cout<<p<<" nota(s) de R$ 2,00"<<endl;
    n=n%2;
    p=n/1; cout<<p<<" nota(s) de R$ 1,00"<<endl;
}