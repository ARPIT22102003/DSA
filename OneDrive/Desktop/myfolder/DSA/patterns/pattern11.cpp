#include<bits/stdc++.h>
using namespace std;
void pat(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j+i==0){
                cout<<"1";
            }
            else if((j+i)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pat(n);
}