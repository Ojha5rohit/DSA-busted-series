// finding power using functions;
// ------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;
// int power(){

//     int a,b;
//     cin>>a>>b;

//     int ans =1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){

//     // int a,b;
//     // cin>>a>>b;

//     int answer = power();
//     cout<<"Answer is "<<answer<<endl;

//     answer = power();
//     cout<<"Answer is "<<answer<<endl;

//     answer = power();
//     cout<<"Answer is "<<answer<<endl;

//     return 0;
// }
// -------------------------------------------------------------------------------------------------

// another way to solve this question is:

#include<iostream>
using namespace std;
int power(int num1 , int num2){
    
    int ans = 1;

    for (int i =1; i<=num2; i++){
        ans=ans*num1;
    }

    return ans;
}

int main(){

    int a,b;
    cin>>a>>b;

    int answer = power(a,b);
    cout<<" Answer is "<<answer<<endl;

    int c,d;
    cin>>c>>d;

    answer = power(c,d);
    cout<<" Answer is "<<answer<<endl;

    return 0;
}

