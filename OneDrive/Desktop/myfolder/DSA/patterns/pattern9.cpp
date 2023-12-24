#include<bits/stdc++.h>
using namespace std;
void up(int n){
int i,j,m;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(m=0;m<2*i+1;m++){
            cout<<"*";
        }
        cout<<endl;
}
}
void down(int n){
    int i,j,m;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(m=0;m<(2*n)-(2*i+1);m++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    up(n);
    down(n);
}