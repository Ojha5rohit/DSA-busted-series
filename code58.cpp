// Homework : nth fibonacci no.
#include<iostream>
using namespace std;

int fibonacci(int n){
    int a=0;
    int b=1;

    for (int i=2; i<n; i++){
        int next = a+b;
        a=b;
        b=next;
    }
    return b;
}

int main(){
    int n;
    cin>>n;

    cout<<"The nth term of the series is "<<fibonacci(n)<<endl;

    return 0;
    
}