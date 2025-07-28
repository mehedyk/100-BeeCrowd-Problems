#include<bits/stdc++.h>
using namespace std;
int main(){
    int code1,code2,stock1,stock2;
    double price1,price2;
    cin>>code1>>stock1>>price1;
    cin>>code2>>stock2>>price2;

    printf("VALOR A PAGAR: R$ %.2lf\n",(stock1*price1)+(stock2*price2));
}
