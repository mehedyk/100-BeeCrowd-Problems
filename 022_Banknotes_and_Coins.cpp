#include<bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    
    int total_cents = n * 100;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", total_cents / 10000);
    total_cents %= 10000;
    
    printf("%d nota(s) de R$ 50.00\n", total_cents / 5000);
    total_cents %= 5000;
    
    printf("%d nota(s) de R$ 20.00\n", total_cents / 2000);
    total_cents %= 2000;
    
    printf("%d nota(s) de R$ 10.00\n", total_cents / 1000);
    total_cents %= 1000;
    
    printf("%d nota(s) de R$ 5.00\n", total_cents / 500);
    total_cents %= 500;
    
    printf("%d nota(s) de R$ 2.00\n", total_cents / 200);
    total_cents %= 200;
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", total_cents / 100);
    total_cents %= 100;
    
    printf("%d moeda(s) de R$ 0.50\n", total_cents / 50);
    total_cents %= 50;
    
    printf("%d moeda(s) de R$ 0.25\n", total_cents / 25);
    total_cents %= 25;
    
    printf("%d moeda(s) de R$ 0.10\n", total_cents / 10);
    total_cents %= 10;
    
    printf("%d moeda(s) de R$ 0.05\n", total_cents / 5);
    total_cents %= 5;
    
    printf("%d moeda(s) de R$ 0.01\n", total_cents);
    
    return 0;
}