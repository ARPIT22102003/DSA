#include<iostream>
using namespace std;
void doop(int n){//dealing with value
    cout<<n<<endl;
    n += 5;
    cout<<n<<endl;
    n += 5;
    cout<<n<<endl;
}
int main(){
    int n = 10;
    doop(n);
    cout<<n<<endl;
    return 0;
}