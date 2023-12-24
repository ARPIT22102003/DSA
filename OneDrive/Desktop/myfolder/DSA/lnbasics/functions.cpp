#include<iostream>
using namespace std;
void normalfunc(){
    cout<<"hello world!"<<endl;
}
void parameterfunc(string name){
    cout<<name<<endl;
}
int main(){
    string name;
    cin>>name;
    parameterfunc(name);
    normalfunc();
}