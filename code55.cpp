// prime no. program :
#include<iostream>
using namespace std;

// 1 -> Prime no.
// 0 -> not a Prime no.
bool isPrime(int n){

    for(int i=2; i<n; i++){
        // divide hogya hai , not a prime no.
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){

    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"is a prime no. "<<endl;
    }
    else{
    cout<<"is not a prime no. "<<endl;
    }
    
    return 0;
}