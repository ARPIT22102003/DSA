#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial = 1;
    cin>>n;
    while(n > 0){
        factorial *= n;
        n--;
    }
    cout<<factorial;
}