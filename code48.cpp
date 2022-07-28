// Homework --> How will you exit if you put switch case inside inside loop and when you can't use switch statement???
#include<iostream>
using namespace std;
int main(){
    // this while condition will always be true if exit(is not put).
    while(1){
        cout<<"how you doing"<<endl;

        int num = 1;
        switch(num){
            case 1: cout<<"i'm fine"<<endl;
            break;
        }
        exit(0);
    }
}

// Answer --> By putting Exit(0), we can exit out of infinite loop.