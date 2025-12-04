#include<bits/stdc++.h>
using namespace std;

int main(){
    double arr[3];
    int i=0;
    for(int j=0; j<3; j++){
        cin>>arr[j];
    }
    
    sort(arr, arr+3, greater<double>());
    
    if(arr[i]>=(arr[i+1] + arr[i+2])) cout<<"NAO FORMA TRIANGULO"<<endl;
    else{
        if(arr[i]*arr[i] == (arr[i+1]*arr[i+1] + arr[i+2]*arr[i+2])) cout << "TRIANGULO RETANGULO" << endl;
        if(arr[i]*arr[i] > (arr[i+1]*arr[i+1] + arr[i+2]*arr[i+2])) cout << "TRIANGULO OBTUSANGULO" << endl;
        if(arr[i]*arr[i] < (arr[i+1]*arr[i+1] + arr[i+2]*arr[i+2])) cout << "TRIANGULO ACUTANGULO" << endl;
        if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]) cout << "TRIANGULO EQUILATERO" << endl;
        if((arr[i]==arr[i+1] && arr[i]!=arr[i+2]) || (arr[i+1]==arr[i+2] && arr[i+1]!=arr[i]) || (arr[i]==arr[i+2] && arr[i]!=arr[i+1])) cout << "TRIANGULO ISOSCELES" << endl;
    }
}