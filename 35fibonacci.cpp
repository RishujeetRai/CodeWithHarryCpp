#include<iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1, c = 1;
    for(int i=1; i<=n; i++){
        cout<<c<<", ";
        c = a+b;
        a=b;
        b=c;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Fibonacci series upto "<<n<<"th term is:\n0, ";
    fibonacci(n);
    return 0;
}