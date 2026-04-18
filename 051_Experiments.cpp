#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=0,coelho=0,rato=0,sapo=0;
    
    for(int i=0;i<n;i++){
        int amt; 
        char type;
        cin>>amt>>type;
        total+=amt;
        if(type=='C')coelho+=amt;
        else if(type=='R')rato+=amt;
        else sapo += amt;
    }
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", (double)coelho / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (double)rato / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (double)sapo / total * 100);
}