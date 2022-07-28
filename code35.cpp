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

        // print 1st triangle;

        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }

        // print 2nd triangle;

        int star=1;
        while(star<=i+i-2){
            cout<<"*";
            star=star+1;
        }


        // print 3rd triangle;
        // int star2=i-1;
        // while(star2){
        //     cout<<"*";
        //     star2=star2-1;
        // }

        
        // print 4th triangle;


        int column=1;
        while(column<=n-i+1){
            cout<<column;
            column=column+1;
        }
        cout<<endl;
        i=i+1;
    }
}