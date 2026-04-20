#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=9;i+=2){
        for(int j=6+i;j>3+i;j--){
            printf("I=%d J=%d\n",i,j);
        }
    }
}

//or we could use it like count

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1;i<=9;i+=2){
//         for(int count=0;count<3;count++){
//             int j = (i+6)-count;
//             printf("I=%d J=%d\n",i,j);
//         }
//     }
// }