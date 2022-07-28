// example of continue statement: Used to skip an interaction of the current loop.
//                                It skips the remaining block of code for that iteration.
#include<iostream>
using namespace std;
int main(){

    int n=5;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;

    for(int i=1;i<n;i++){
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Reply toh karde"<<endl;
    }
}