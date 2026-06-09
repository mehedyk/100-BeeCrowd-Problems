#include<bits/stdc++.h>
using namespace std;
int main(){
    for(double i=0;i<=2.01;i+=0.2){
        for(int k=0;k<3;k++){
            double j=1+k+i;
            if(fabs(i-0.0)<1e-9 || (i>=0.9 && i<=1.01) || i>=1.99){
                printf("I=%d J=%d\n",(int)round(i),(int)round(j));
            } else {
                printf("I=%.1f J=%.1f\n",i,j);
            }
        }
    }
}