#include<iostream>
using namespace std;
int main(){
    int i,j,m;
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            cout<<" ";
        }
        for(m=0;m<2*i+1;m++){
            cout<<"*";
        }
        cout<<endl;
    }
}