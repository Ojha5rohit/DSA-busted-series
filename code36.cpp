// print-->
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int star=1;
        while(star<=i+i-2){
            cout<<"*";
            star=star+1;
        }
        int column=1;
        while(column<=n-i+1){
            cout<<column;
            column = column+1;
        }
        cout<<endl;
        i=i+1;
    }
}