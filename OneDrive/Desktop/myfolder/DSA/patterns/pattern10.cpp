#include<bits/stdc++.h>
using namespace std;
void up(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
void down(int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<=n-1-i-1;j++){
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